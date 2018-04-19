#include <cstdio>
#include <cstdlib>
#include <cmath>

using namespace std;

template< class T>

class Insertionsort{
    
    private:
    
    public:
    
    void insertionSort(vector<T>& v, int n){
       int i, j;
       T key;
       for (i = 1; i < n; i++){
           key = v[i];
           j = i-1;
     
           while (j >= 0 && v[j] > key){
               v[j+1] = v[j];
               j = j-1;
           }
           v[j+1] = key;
       }
    }
    
    void insertionSortdemo(vector<T>& v, int n){
       int i, j;
       T key;
       for (i = 1; i < n; i++){
           key = v[i];
           j = i-1;
     
           while (j >= 0 && v[j] > key){
               cout << "Elementos intercambiados: " << v[j+1] << " y " << v[j] << endl; 
               v[j+1] = v[j];
               j = j-1;
	       for(int k=0; k<v.size(); k++)
                	cout << "\t" << v[k] << endl; 
		
           }
           v[j+1] = key;
       }
    }
};
