#include <cstdio>
#include <cstdlib>
#include <vector>

using namespace std;

template<class T>

class Bubblesort{
    
    private:
    
    public:
        
    void swap(T *xp, T *yp){
        T temp = *xp;
        *xp = *yp;
        *yp = temp;
    }
     
    void bubbleSort(vector<T>& v, int n){
       int i, j;
       for (i = 0; i < n-1; i++)      
     
           for (j = 0; j < n-i-1; j++) 
               if (v[j] > v[j+1])
                  swap(&v[j], &v[j+1]);
    }
    
    void bubbleSortdemo(vector<T>& v, int n){
       int i, j;
       for (i = 0; i < n-1; i++)      
     
           for (j = 0; j < n-i-1; j++) 
               if (v[j] > v[j+1]){
                    cout << "Elementos intercambiados: " << v[j] << " y " << v[j+1] << endl;  
                    swap(&v[j], &v[j+1]);
	       	    for(int k=0; k<v.size(); k++)
                	cout << "\t" << v[k] << endl; 
               }
    }
};
