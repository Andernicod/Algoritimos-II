#include <stdio.h>
#include <math.h>

int main(){
    float a,b;
    printf("Insira o raio do circulo: ");
    scanf("%f", &a);
    b = M_PI*pow(a,2);
    printf("Um círculo com raio %.2f tem area igual a %.2f.",a,b);
    return 0;
}