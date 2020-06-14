#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;


int main() {
    int HT, HE;
    float SH, SM, SE, desc, SD, ST;
   


    cout << "Ingrese su salario por hora"<< endl;
    cin>> SH;
   
    cout << "Ingrese su salario por horas extra"<< endl;
    cin>> SE;
 
    cout << "Ingrese las horas trabajadas "<<endl;
    cin>> HT;
  
    cout << "Ingrese las horas extras "<<endl;
    cin>> HE;

    SM= (SH*HT)+(HE*SE);
    
    cout << "El salario mensual es: "<< SM<< endl;
    if(SM<500){
        desc = (SM*0.10) + (SM*0.04) + (SM*0.0625);
        ST= (SM-desc);
    }else{
        desc = (SM*0.04)+ (SM*0.0625);
        ST= SM-desc;
    }
    cout<< "El salario con descuentos es: "<< ST<< endl;
    
   }