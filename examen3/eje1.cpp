#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;

int horasfun(){
    int h;
    cout<<"Ingrese las horas trabajadas: "<< endl;
    cin>> h;
    return h;
}

int horasex(){
    int e;
    cout<<"Ingrese las horas extras: "<<endl;
    cin>> e;
    return e;
}

int main() {
    int HT = horasfun();
    int  HE = horasex();
    float SH, SM, SE, desc, SD, ST;
    int HT = horasfun();

    cout << "Ingrese su salario por hora"<< endl;
    cin>> SH;
   
    cout << "Ingrese su salario por horas extra"<< endl;
    cin>> SE;
    SM= (SH*HT)+(HE*SE);
    
    cout << "El salario mensual es: "<< SM<< endl;
    if(SM>500){
        desc = (SM*0.10) + (SM*0.04) + (SM*0.0625);
        ST= (SM-desc);
    }else{
        desc = (SM*0.04)+ (SM*0.0625);
        ST= SM-desc;
    }
    cout<< "El salario con descuentos es: "<< ST<< endl;
    
   }