#include <iostream>
#include <math.h>

using namespace std;

int main(){
int a, b ,c;
float x,y;

cout<<"ingrese A:";
cin>>a;
cout<<"ingrese B:";
cin>>b;
cout<<"ingrese C:";
cin>>c;

x = (-b + sqrt(pow(b,2) - 4*c))/2*a;

cout<<x;

    return 0;
}