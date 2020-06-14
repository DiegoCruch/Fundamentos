#include <iostream>
#include <string> 
using namespace std;

int main(){
double dinero,iva;
string pais;
cout<<"lista de paises dispoibles: "<<endl<<"el salvador"<<endl<<"guatemala"<<endl<<"honduras"<<endl<<"espania"<<endl;
cout<<"ingrese un pais: "<<endl;
getline(cin,pais);
cout<<"ingrese el dinero: ";
cin>>dinero;
if (pais=="el salvador")
{
    iva=dinero*0.13;
    cout<<"se paga"<<iva<<" en total de iva";
}
if (pais=="honduras")
{
    iva=dinero*0.15;
    cout<<"se paga "<<iva<<" en total de iva";
}
if (pais=="guatemala")
{
    iva=dinero*0.09;
    cout<<"se paga "<<iva<<" en total de iva";
}
if (pais=="espania")
{
    iva=dinero*0.20;
    cout<<"se paga "<<iva<<" en total de iva";
}
}
