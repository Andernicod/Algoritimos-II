#include <stdio.h>

int main(){
    int a, b, soma, subtracao, multiplicacao, divisao;
    printf("Insira o primeiro número: ");
    scanf("%d", &a);
    printf("Insira o segundo número: ");
    scanf("%d", &b);
    soma = a+b;
    subtracao = a-b;
    multiplicacao = a*b;
    divisao = a/b;
    printf("A soma é %d\n",soma);
    printf("A subtração é %d\n", subtracao);
    printf("A multiplicação é %d\n", multiplicacao);
    printf("A divisão é %d\n", divisao);
    return 0;
}