#include <iostream>
using namespace std;

int main ()
{
    //Creacion de variable
    int n =0;
    
    cout << "Ingrese el numero de datos: " << endl;
    cin >> n;
    //Variables de totales
    int total = 0;
    //For antiguo
    for (int i = 2; i <=n; i+=2)
    {
        total = total + i;
    }
    //Mostrar el resultado
    cout << "El total es: " << total << endl;
    
    
    
    
    
    return 0;
}