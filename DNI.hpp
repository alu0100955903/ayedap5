#include <cstdio>
#include <cstdlib>
#include <iostream>

using namespace std;

class DNI{
    
    private:
        
        string name_;
        string surname_;
        int number_;
        char c_;
        int counter_;
        
    public:
    
        DNI(){}
        DNI(string name, string surname, int number):name_(name), surname_(surname), number_(number){
            c_ = "TRWAGMYFPDXBNJZSQVHLCKE"[ number_ % 23];
        } 
        
        int get_counter(){
            return counter_;    
        }
        
        bool operator==(const DNI& a){
            counter_++;
            return (this->number_ == a.number_);
        }
        
        bool operator<(const DNI& a){
            counter_++;
            return (this->number_ < a.number_);
        }
        
        bool operator>(const DNI& a){
            counter_++;
            return (this->number_ > a.number_);
        }
        
        bool operator!=(const DNI& a){
            counter_++;
            return (this->number_ != a.number_);
        }
        
        bool operator<=(const DNI& a){
            counter_++;
            return (this->number_ <= a.number_);
        }
        
        friend ostream& operator<<(ostream& os, const DNI& d);
};

ostream& operator<<(ostream& os, const DNI& d){
    os << d.number_ << d.c_ ;
    return os;
};
