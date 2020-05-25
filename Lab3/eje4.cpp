#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;
int main(){
 char prueba[40];
 cout << "\nEscribe una palabra: ";
 cin.getline(prueba,40,'\n');
 int longi = 0;
 longi = strlen(prueba);
 if(longi>10){cout << "\nEl numero de caracteres es: " << longi<<endl;}
 else{cout << "\nLa palabra es menor a 10 digitos."<<endl;}
 if (longi %2==0)
 {
     cout<<"Es par"<<endl;
 }else
 {
     cout<<"Es impar"<<endl;;
 }
 return 0;
}