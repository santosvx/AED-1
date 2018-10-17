#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
    int n;
    printf("Digite um valor:");
    scanf("%d",&n);
    sucessor(n);
    return 0;
}

void sucessor(int numero)
{
    numero = numero+1;
    printf("O sucessor é = %d\n",numero);
}
