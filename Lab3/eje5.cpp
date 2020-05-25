#include <cstring>
#include <iostream>
using namespace std;
 
 
int main()
{
    char texto[40];
 
    cout << "Introduce una palabra: ";
    cin >>  texto;
    cout << "La palabra tiene " << strlen(texto)
        << " letras." << endl;    
    
    return 0;
}