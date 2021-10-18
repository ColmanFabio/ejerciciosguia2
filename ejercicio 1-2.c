#include<stdio.h>

int main () {
    int base;
    int altura;
    int superficie;
    
    printf("Escriba la medida de la base del rectángulo: ");
    scanf("%i", &base);
    printf("Escriba la medida de la altura del rectángulo: ");
    scanf("%i" , &altura);
    superficie= base*altura;
    printf("La superficie del rectángulo es:%i", superficie);
       return 0;
}