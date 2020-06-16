
#include <conio.h>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int h, m, s;
    cout<< "Ingrese la hora: "<<endl;
    cin>> h;
    cout<<"Ingrese los minutos: "<<endl;
    cin>> m;
    cout<<"Ingrese los segundos: "<<endl;
    cin>> s;
    if ( h >= 0 && h <= 23 && m >= 0 && m <= 59 && s >= 0 && s <= 59 )
    {
        s++;
        if ( s == 60 )
        {
            s = 0;
            m++;
            if ( m == 60 )
            {
                m = 0;
                h++;
                if ( h == 24 )
                    h = 0;
            }
          
        }
        cout<<"La hora es:"<< h<<" "<< m<< " "<<s<< " "<<endl;
        return 0;
}
}

