#include<stdio.h>

int main () {
    int num1;
    int num2;
    int num3;
    int num4;
    int numeromenor;
    
    
    printf("Escriba el primer número: ");
    scanf("%d", &num1);
    printf("Escriba el segundo número: ");
    scanf("%d", &num2);
    printf("Escriba el tercer número: ");
    scanf("%d", &num3);
    printf("Escriba el tercer número: ");
    scanf("%d", &num4);

    numeromenor = num1;

    if (numeromenor > num2) {
        numeromenor = num2;
    }

    if (numeromenor > num3) {
        numeromenor = num3;
    }

    if (numeromenor > num4) {
        numeromenor = num4;
    }

    printf("El numero menor es: %d", numeromenor);
}