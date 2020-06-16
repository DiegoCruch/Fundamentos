#include <iostream>
#include <algorithm>
using namespace std;

int mcm (int num1, int num2){
    int mcd= 0;
    int a= std::max(num1, num2);
    int b= std::min(num1, num2);
    
    do{
        mcd=b;
        b= a%b;
        a=mcd;
        
    }while (b!=0);
    return mcd;
}

int main (){
    int num1, num2;
    cout<<"Introduzca su primer numero: "<< endl;
    cin>>num1;
    cout<<"Introduzca su segundo numero: "<< endl;
    cin>>num2;

    cout<<"El mcd entre "<<num1<<" y "<<num2<<" es:  "<<mcm(num1, num2);
    return 0;
    

}