#include<stdio.h>

int main () {
    int num1;
    int num2;
    int num3;
    int suma;
    int producto;
    
    printf("Escriba el primer número: ");
    scanf("%i", &num1);
    printf("Escriba el segundo número: ");
    scanf("%i", &num2);
    printf("Escriba el tercer número: ");
    scanf("%i", &num3);
    
    suma = num1+num2+num3;
    printf("La suma de los números es: %i", suma );
    producto = num1*num2*num3;
    printf("El producto de los números es: %i", producto);
       return 0;
}