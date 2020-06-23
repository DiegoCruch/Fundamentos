#include <iostream>

using namespace std;

int lee(int numero[199]){
    for (int i = 199; i>=1; i-=2){
        numero[i] = i;
        cout<< numero[i] << (",");
    }
}
int main (){
    int rango[199];
    cout<<"Los numeros impares de manera descendente: "<<endl;
    lee(rango);
    return 0;
    }