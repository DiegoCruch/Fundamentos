#include <iostream>
        using namespace::std;
        bool Bisiesto( int );
        int main() {                
            int anio;
            cout <<"\nIntroduzca un ano :\n";
            cin >> anio;
            if ( Bisiesto( anio ) )
            cout << anio << " es un ano bisiesto." << endl;
            else 
            cout << anio << " no es un ano bisiesto." << endl;
            return 0;
        }  
        bool Bisiesto( int a  )
        {     
            if ( 0 != a%4 )
            return false;
            else if ( 0 != a % 100 )
            return true;
            else if ( 0 != a % 400 )
            return false;
            else 
            return true;
        }