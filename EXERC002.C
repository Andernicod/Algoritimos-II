#include <stdio.h>
#include <math.h>

int main(){
    float a, b, imc;
    printf("Digite seu peso em KG: ");
    scanf("%f", &a);
    printf("Digite sua altura em metros: ");
    scanf("%f", &b);
    imc = a/pow(b,2);
    printf("O IMC de uma pessoa com peso %.2fkg e altura %.2fm é igual a %.2f.", a, b, imc);
    return 0;
}