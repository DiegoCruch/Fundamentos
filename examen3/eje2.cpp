#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;



int main() {
    int x;
    int num;
    int cont=0;

    srand((unsigned)time(NULL));
    x = rand()%(101);
    cout<<"Adivina un numero entre 1 y 100"<< endl;

    int a= 0;
    
    while(a ==0 ){
        
        cout<<"Ingresa un numero: "<< endl;
        cin>> num;
        cont++;
        
        if(num>x)
            cout<<"Es menor"<< endl;
            else if(num < x)
            cout<<"Mayor"<<endl;
        else{
            cout<< endl<<"Adivinaste"<<endl;
            cout<<"Numero de intentos : "<<cont <<endl;
            a=1;
        }
        

    }
    }

  
   
   