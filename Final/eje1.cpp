#include <iostream>
using namespace std;
const int longCad = 20;
    struct costoPorArticulo
    {
        char nombreArticul[longCad + 1];
        int cantidad;
        float precio;
        float costoPorArticulo;
    } nombre;
    float productos(int m, struct costoPorArticulo arreglo[])
    {
        int i;
        for (i = 0; i < m; i++)
        {
            cout << "El nombre del producto: " << endl;
            cin >> arreglo[i].nombreArticul;
            cout << "La cantidad de productos: " << endl;
            cin >> arreglo[i].cantidad;
            cout << "El precio del producto: " << endl;
            cin >> arreglo[i].precio;
        }
    }
    float costoarticulo( int m , struct costoPorArticulo arreglo[])
    {
        int i;
        for (i = 0; i < m; i++)
        {
            arreglo[i].costoPorArticulo = arreglo[i].cantidad * arreglo[i].precio;
        } 
    }
    float mostrar( int m, struct costoPorArticulo arreglo[])
    {
        int i;
        for ( i = 0; i < m; i++)
        {
            cout<<"Nombre articulo: "<<arreglo[i].nombreArticul<<endl;
            cout<<"Cantidad: "<<arreglo[i].cantidad<<endl;
            cout<<"Precio: "<<arreglo[i].precio<<endl;
            cout<<"Costo por articulo: "<<arreglo[i].costoPorArticulo<<endl;
        }
    }

    int main()
    {
        int m;
        cout << "Cantidad de productos: " << endl;
        cin >> m;
        struct costoPorArticulo arreglo[m];
        productos(m, arreglo);
        costoarticulo(m, arreglo);
        mostrar(m,arreglo) ;
    }