#include<stdio.h>

int main () {
     int numero;
     printf("Ingrese un número: ");
    scanf("%d", &numero);


    if ( numero > 0)
    {
        printf("el número ingresado es positivo");
    }
    else
    {
        printf("el número ingresado es negativo");
    }
    if (numero == 0)
    {
        printf("el numero ingresado es igual a 0");
    }
    
    if (numero %2 ==0)
    {
      printf ("El número es par");
    }

    else
    {
        printf ("El número es impar");
    }
    
}