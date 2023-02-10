#include <stdio.h>
#include <math.h>

int main(){
    float a,b,c;
    printf("Insira o valor do primeiro cateto: ");
    scanf("%f", &a);
    printf("Insira o valor do segundo cateto: ");
    scanf("%f", &b);
    c = sqrt(pow(a,2)+pow(b,2));
    printf("Um triângulo retângulo com lados %.1f e %.1f tem uma hipotenusa igual a %.1f.",a,b,c);
    return 0;
}