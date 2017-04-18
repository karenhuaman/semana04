#include <iostream>
#include <vector>
using namespace std;

int main ()
{
    //Crear el vector
    vector <int> vec; //= {1,4,5,3,10,200,21,11,66,67};
    
    
    vec.push_back(1);//primer elemento
    vec.push_back(4);//segundo elemento
    vec.push_back(5);//ultimo elemento
    //usando el operador []
    cout << "usando el operador []" << endl;
    for (int i = 0; i < vec.size(); i++)
    cout << vec[i] << endl;
    
     //usando el metodo at ()
     cout << "usando el metodo at ()" << endl;
    for (int i = 0; i < vec.size(); i++)
    cout << vec.at(i) << endl;
  
  vec.pop_back();//saca el ultimo elemento
  
    //Tamano del vector
    cout << "El tamaño es: " << vec.size() << endl;
    
    
    for (auto i : vec)
    {
        cout << i << endl;
    }
    
    
    
    
    return 0;
}