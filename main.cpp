#include <iostream>
#include "uno.h"
#include "dos.h"
#include "tres.h"
#include <fstream>
using namespace std;
using namespace heap;


int main()
{
  ofstream archivo;
  archivo.open("heapsort.txt");
    int A[100],n;
    cout<<"Ingresa la cantidad de elementos:";
    cin>>n;

    ingresar(A,n);
    heapSort(A,n);
    imprimir(A,n);
archivo.close();
    return 0;
}