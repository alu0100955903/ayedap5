#include <cstdio>
#include <cstdlib>

using namespace std;

template< class T>

class Shellsort{
    
    private:
    
    public:
    
    int shellSort(vector<T>& v, int n){
        for (int gap = n/2; gap > 0; gap /= 2)
        {
            for (int i = gap; i < n; i += 1)
            {
                T temp = v[i];
                int j;            
                for (j = i; j >= gap && v[j - gap] > temp; j -= gap)
                    v[j] = v[j - gap];
                    
                v[j] = temp;
            }
        }
        return 0;
    }
    
    int shellSortdemo(vector<T>& v, int n){
        for (int gap = n/2; gap > 0; gap /= 2)
        {
            for (int i = gap; i < n; i += 1)
            {
                T temp = v[i];
                int j;            
                for (j = i; j >= gap && v[j - gap] > temp; j -= gap)
                    v[j] = v[j - gap];
                
                cout << "Elementos intercambiados: " << v[j] << " y " << temp << endl;  
                v[j] = temp;
	        
		for(int k=0; k<v.size(); k++)
                	cout << "\t" << v[k] << endl; 
            }
        }
        return 0;
    }
};
