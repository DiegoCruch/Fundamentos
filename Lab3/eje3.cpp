#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;


int main() {
   int n;
    cout<<"Ingrese un numero: ";
    cin>>n;

    if(n > 1)
    {
        cout<<"El numero es positivo";     
    }
    if(n < 0){
        cout<<"El numero es negativo";
    }
    if(n == 0){
        cout<<"El numero es igual a 0";
    }
   }