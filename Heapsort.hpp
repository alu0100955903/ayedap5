
using namespace std;

template <class T>

class Heapsort{
    
    private:
    
    public:
    
    void heapify(vector<T>&  v, int n, int i){
        int largest = i;  
        int l = 2*i + 1;  // left = 2*i + 1
        int r = 2*i + 2;  // right = 2*i + 2
     
        if (l < n && v[l] > v[largest])
            largest = l;
     
        if (r < n && v[r] > v[largest])
            largest = r;
     
        if (largest != i)
        {
            swap(v[i], v[largest]);
            heapify(v, n, largest);
        }
    }
     
    void heapSort(vector<T>&  v, int n){
        // Build heap (revange vay)
        for (int i = n / 2 - 1; i >= 0; i--)
            heapify(v, n, i);
     
        for (int i=n-1; i>=0; i--)
        {
            swap(v[0], v[i]);
     
            heapify(v, i, 0);
        }
    }
    
    void heapSortdemo(vector<T>&  v, int n){
        for (int i = n / 2 - 1; i >= 0; i--)
            heapify(v, n, i);
     
        for (int i=n-1; i>=0; i--)
        {
            cout << "Elementos intercambiados: " << v[0] << " y " << v[i] << endl;
            swap(v[0], v[i]);
            cout << "\tDespués del cambio: " << endl;
            for(int j=0; j<v.size(); j++)
                cout << "\t" << v[j] << endl; 
     
            heapify(v, i, 0);
        }
    }
};
