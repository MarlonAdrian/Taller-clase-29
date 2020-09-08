#include <iostream>
#include <fstream>
using namespace std;

void imprimir (int A[],int n)
{
  ofstream archivo;
  archivo.open("heapsort.txt");
  archivo << "Arreglo ordenado: ";
  
    for(int i=1;i<=n;i++)
    {   
        cout<<"["<<A[i]<<"]";
         archivo <<"["<<A[i]<<"]";
    }
 archivo.close();   
}