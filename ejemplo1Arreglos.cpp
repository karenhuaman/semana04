#include <iostream>
using namespace std;
int main ()
{
    int x=10;
    
    //Creacion de Variables
    int arreglo[5] = {3,4,5,6,7};
    
    //Acceder a los valores
    cout << x << endl;
    
    //Acceder a un arrglo
    cout << arreglo[0] << endl; // Acccediendo al primer elemento
    cout << arreglo[4] << endl; //Accediendo al ultimo elemento
    
    cout << "Mostrando el bucle" << endl;
    //Bucle
    for (auto i:arreglo)
    {
        cout << i << endl;
    }
    
    
    
    
    return 0;
}