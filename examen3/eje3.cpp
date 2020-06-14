#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;

int funcionano()
{
    int a;
    cout<<"Ingrese el año que se quiere saber"<< endl;
    cin>>a;
    return a;
}

int main(){

    int b = funcionano();
  
    if(b%4==0 and b%100!=0 or b%400==0) //Condición de bisiesto
      cout << "Bisiesto" << endl;
   else
      cout << "No es bisiesto" << endl;
    
    
}
    
