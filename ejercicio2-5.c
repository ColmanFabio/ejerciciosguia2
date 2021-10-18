#include<stdio.h>

int main () {
    int num1;
    int num2;
    int num3;
    int num4;
    int numeromayor;
    
    
    printf("Escriba el primer número: ");
    scanf("%d", &num1);
    printf("Escriba el segundo número: ");
    scanf("%d", &num2);
    printf("Escriba el tercer número: ");
    scanf("%d", &num3);
    printf("Escriba el tercer número: ");
    scanf("%d", &num4);

    numeromayor = num1;

    if (numeromayor < num2) {
        numeromayor = num2;
    }

    if (numeromayor < num3) {
        numeromayor = num3;
    }

    if (numeromayor < num4) {
        numeromayor = num4;
    }

    printf("El mayor es: %d", numeromayor);
}