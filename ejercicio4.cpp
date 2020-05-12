#include<iostream>
#include<string>

using namespace std;

main(){

string nomb;
float precio;
int cantidad;
float total;

cout<<"Ingrese nombre del producto: "<<endl;
cin>>nomb;
cout<<"Ingrese el precio del pruducto:"<<endl;
cin>>precio;
cout<<"Ingrese la cantidad de productos: "<<endl;
cin>>cantidad;

total= cantidad*precio;

cout<<"producto: "<<nomb<<endl;
cout<<"la cantidad de productos es: "<<cantidad<<endl;
cout<<"El precio es: "<<total<<"$"<<endl;

}