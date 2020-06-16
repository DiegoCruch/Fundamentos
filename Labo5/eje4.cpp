
#include <conio.h>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int a, m, d;
    cout<< "Ingrese el ano: "<<endl;
    cin>> a;
    cout<<"Ingrese los mes: "<<endl;
    cin>> m;
    cout<<"Ingrese los dia: "<<endl;
    cin>> d;
    if (  a>= 0 && m >= 0 && m <= 12 && d >= 0 && d <= 31 )
    {
        d++;
        if ( d == 32 )
        {
            d = 1;
            m++;
            if ( m == 13 )
            {
                m = 1;
                a++;
            }
        }
                if(a%4==0 and a%100!=0 or a%400==0)
                cout << " Su ano es Bisiesto" << endl;
                else
                cout << "No es bisiesto" << endl;
        cout<<"La hora es:"<< a<<" "<< m<< " "<<d<< " "<<endl;
        return 0;
}else
cout<<"Fecha no valida"<<endl;
}