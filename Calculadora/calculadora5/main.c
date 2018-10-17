#include <stdio.h>
#include <stdlib.h>

void somaValores();

int soma;

int main()
{
    soma=0;
    somaValores();
    printf("Valor de soma = %d\n",soma);
    return 0;
}

void somaValores()
{
    int a,b,soma;
    printf("Digite o primeiro valor:");
    scanf("%d",&a);
    printf("Digite o segundo valor:");
    scanf("%d",&b);
    soma=a+b;
    printf("A soma de %d e %d = %d\n", a,b,soma);
}
