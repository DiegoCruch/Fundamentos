#include <iostream>

using namespace std;
const int longCad = 20;
    struct costoPorArticulo//este es una funcion struc
    {
        char nombreArticulo[longCad + 1];
        int cantidad;
        float precio;
        float costoPorArticulo;
    };
float lectura(int m, struct costoPorArticulo miarreglo[]){//esta funcion sirve para tomar los datos que se le piden 
    for(int i=0; i < m; i++)
    {
    cout<<"Nombre del producto: "<<endl;
    cin>>miarreglo[i].nombreArticulo;
    cout<<"Cantidad: "<<endl;
    cin>>miarreglo[i].cantidad;
    cout<<"Precio: "<<endl;
    cin>>miarreglo[i].precio;
    }
}
float costo(int m, struct costoPorArticulo miarreglo[]){//esta funcion saca el costo por articulo multiplicando la cantidad por el precio de los productos
    for(int i=0; i< m; i++){
        miarreglo[i].costoPorArticulo = miarreglo[i].cantidad*miarreglo[i].precio;
    }
}
float mostrar(int m, struct costoPorArticulo miarreglo[]){//esta funcion muestra en la terminal el nombre la cantidad el precio y el precio unitario de los productos
    for(int i=0; i < m; i++){
    cout<<"El nombre es "<<miarreglo[i].nombreArticulo<<endl;
    cout<<"La cantidad es "<<miarreglo[i].cantidad<<endl;
    cout<<"El precio es "<<miarreglo[i].cantidad<<endl;
    cout<<"El precio unitario es "<<miarreglo[i].costoPorArticulo<<endl;

    }
}
float retorno(int m, struct costoPorArticulo miarreglo[]){//en esta funcion toma costo total de los productos 
    float CosTotal= 0;
    for(int i=0; i < m; i++){
        CosTotal= miarreglo[i].costoPorArticulo+CosTotal;
    }
    return CosTotal;
}

int main(){//en el main sirve para declarar las funciones y mostrar el costo total
 
    int m;
    cout<<"INGRESE DE CANTIDAD DE PRODUCTO"<<endl;
    cin>>m;
    struct costoPorArticulo miarreglo [m];
    lectura(m, miarreglo);
    costo(m, miarreglo);
    mostrar(m, miarreglo);
    retorno(m, miarreglo);
    cout<<"El costo total es "<<retorno(m, miarreglo)<<endl;

}
