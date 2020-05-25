#include <iostream>
#include <stdio.h>
using namespace std;


int main() {
   int a, b;
   printf("Ingrese 2 numeros: \n");
   scanf("%d%d", &a, &b);
   if((a % b == 0) && (b!=0))
   {
      printf("%d es Divisible entre %d",a,b);
   }else{
      printf("%d NO es Divisible entre %d",b,a);
   }

   return 0;
   }