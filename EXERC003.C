#include <stdio.h>

int main(){
    float a,b;
    printf("Insira a temperatura em Celsius: ");
    scanf("%f", &a);
    b = 1.8*a+32;
    printf("Uma temperatura de %.1f graus Celsius equivale a %.1f graus Fahrenheit.", a, b);
    return 0;
}