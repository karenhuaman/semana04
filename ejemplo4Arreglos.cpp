#include <iostream>
using namespace std;

int main ()
{
    //Crear el arreglo
    int arreglo[10] ={1,4,5,3,10,200,21,11,66,67};
    //Crear la variable max
   int min = arreglo[0];
   
   //Recorriamos el arreglo
   for (auto i:arreglo)
   {
       //Si max es menor que i, mas se convierte en i
       if (min > i)
       min = i;
   }
   
   //Presentamos el maximo
   
   cout << "El valor minimo es: " << min << endl;
    return 0;
}