#include <cmath>
#include <cstdio>
#include <vector>
#include <string>
#include <cstdlib>
#include "DNI.hpp"
#include <iostream>
#include <string.h>
#include "Heapsort.hpp"
#include "Shellsort.hpp"
#include "Quicksort.hpp"
#include "Bubblesort.hpp"
#include "Insertionsort.hpp"

using namespace std;

int main(){
    
    system("clear");

    cout << "------------------------------------------------------------------" << endl;
    cout << "------------------------------------------------------------------" << endl;
    cout << "---------------------------PRACTICA 5-----------------------------" << endl;
    cout << "------------------------------------------------------------------" << endl;
    cout << "------------ALGORITMOS Y ESTRUCTURAS DE DATOS AVANZADAS-----------" << endl;
    cout << "------------------------------------------------------------------" << endl;
    cout << "---------------------METODOS DE ORDENACIÓN------------------------" << endl;
    cout << "------------------------------------------------------------------" << endl;
    
    int menu1=100;
    int menu2=100;
    
    while(menu1!=3){
        system("clear");
         
        cout << "MENU:" << endl;
        cout << "\t1. Modo Demostración" << endl;
        cout << "\t2. Modo Estadístico" << endl;
	cout << "\t3. Salir" << endl << endl;
        cout << "Opción: ";
        cin >> menu1;
        cin.ignore();
        
        if(menu1 == 1){
            system("clear");
            vector<DNI> test;
            int testsz;
            
            cout << "Los elementos se crearán de forma aleatoria y el máximo es 25" << endl;
	    cout << "¿Cuántos elementos desea ordenar? : ";
            cin >> testsz;
            cin.ignore();
            
            for(int i=0; i<testsz; i++){
                test.push_back(DNI("","", 30000000 + rand() % 50000000));
            }
            
            while(menu2!=6){
                system("clear");
                
                vector<DNI> aux;
                aux = test;
                
                cout << "Modo Demostración" << endl << endl;
		cout << "Orden inicial de los elementos" << endl << endl;
                for(int i=0; i<aux.size(); i++)
                	cout <<"\t" << aux[i] << " " << endl;
                
		cout << endl << endl << "Métodos de ordenación:" << endl;
                cout << "\t1. Quicksort" << endl;
                cout << "\t2. Heapsort" << endl;
                cout << "\t3. Shellsort" << endl;
                cout << "\t4. Bubblesort" << endl;
                cout << "\t5. Insertionsort" << endl;
                cout << "\t6. Atrás" << endl << endl;
                cout << "Opción: ";
                cin >> menu2;
                cin.ignore();
                                
                system("clear");
                
                if(menu2 == 1){
                    cout << "Quicksort: " << endl;
                    Quicksort<DNI> Quicksort;
                    Quicksort.quicksortdemostration(aux, 0, aux.size()-1);
                }
                
                if(menu2 == 2){
                    cout << "Heapsort: " << endl;
                    Heapsort<DNI> Heapsort;
                    Heapsort.heapSortdemo(aux, aux.size());
                }
                
                if(menu2 == 3){
                    cout << "Shellsort: " << endl;
                    Shellsort<DNI> Shellsort;
                    Shellsort.shellSortdemo(aux, aux.size());
                }
                
                if(menu2 == 4){
                    cout << "Bubblesort: " << endl;
                    Bubblesort<DNI> Bubblesort;
                    Bubblesort.bubbleSortdemo(aux, aux.size());
                }
                
                if(menu2 == 5){
                    cout << "Insertionsort: " << endl;
                    Insertionsort<DNI> Insertionsort;
                    Insertionsort.insertionSortdemo(aux, aux.size());
                }
                
                if(menu2 != 6){
                    cout << endl << "Solución:" << endl;
                    
                    for(int i=0; i<aux.size(); i++){
                        cout <<"\t" << aux[i] << " " << endl;
                    }
                
                    cout << endl << "Pulse una tecla para continuar" << endl;
                    getchar();
                }
            }
            
        }
        
        if(menu1 == 2){
            system("clear");
            vector<DNI> test;
            vector<vector<DNI > > testbank;
            int testsz;
            int ntest;
            
            cout << "Los elementos se crearán de forma aleatoria y el máximo es 25" << endl;
	    cout << "¿Cuántos elementos desea ordenar? : ";
            cin >> testsz;
            cin.ignore();
            cout << "¿Cuántas pruebas desea hacer?: ";
            cin >> ntest;
            cin.ignore();
            
            for(int i=0; i<ntest; i++){
                for(int j=0; j<testsz; j++){
                    test.push_back(DNI("","", 30000000 + rand() % 50000000));
                }
                
                testbank.push_back(test);
                test.clear();
            }
            
            cout << endl << endl <<"Comparación de Métodos" << endl << endl;
            cout << "\t     Mínimo   Medio  Máximo" << endl;
            
            for(int i=0; i<5; i++){
                vector<int> num;
                vector<vector<DNI> > aux2;
                aux2=testbank;
                int sum=0;
                
                if(i==0){
                    Quicksort<DNI> Quicksort;
                    for(int j=0; j<aux2.size(); j++){
                        Quicksort.quicksort(aux2[j], 0, aux2[j].size()-1);
                        for(int k=0; k<aux2[j].size(); k++){
                            num.push_back(aux2[j][k].get_counter());
                        }
                    }
                }
                
                if(i==1){
                    Heapsort<DNI> Heapsort;
                    for(int j=0; j<aux2.size(); j++){
                        Heapsort.heapSort(aux2[j], aux2[j].size());
                        for(int k=0; k<aux2[j].size(); k++){
                            num.push_back(aux2[j][k].get_counter());
                        }
                    }
                }
                
                if(i==2){
                    Shellsort<DNI> Shellsort;
                    for(int j=0; j<aux2.size(); j++){
                        Shellsort.shellSort(aux2[j], aux2[j].size());
                        for(int k=0; k<aux2[j].size(); k++){
                            num.push_back(aux2[j][k].get_counter());
                        }
                    }
                }
                
                if(i==3){
                    Bubblesort<DNI> Bubblesort;
                    for(int j=0; j<aux2.size(); j++){
                        Bubblesort.bubbleSort(aux2[j], aux2[j].size());
                        for(int k=0; k<aux2[j].size(); k++){
                            num.push_back(aux2[j][k].get_counter());
                        }
                    }
                }
                
                if(i==4){
                    Insertionsort<DNI> Insertionsort;
                    for(int j=0; j<aux2.size(); j++){
                        Insertionsort.insertionSort(aux2[j], aux2[j].size());
                        for(int k=0; k<aux2[j].size(); k++){
                            num.push_back(aux2[j][k].get_counter());
                        }
                    }
                }

                
                Heapsort<int> aux;
                aux.heapSort(num, num.size());
                
                cout << "Método " << i+1 << ": \t" << num[0] << "\t " << num[num.size()%2] << "\t" << num[num.size()-1] << endl;
                num.clear();
            }
            
            cout << endl << "Pulse una tecla para continuar" << endl;
            getchar();
        }
    }
    system("clear");
}
