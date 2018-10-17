#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void menu();
void somaValores();
void subtraiValores();
void multiplicaValores();
void divideValores();

int main()
{
    setlocale(LC_ALL,"portuguese");
    int op;
    do
    {
        menu();
        printf("Escolha:");
        scanf("%d",&op);
        switch (op)
        {
        case 1:
            somaValores();
            break;
        case 2:
            subtraiValores();
            break;
        case 3:
            multiplicaValores();
            break;
        case 4:
            divideValores();
            break;
        }
        if (op!=9) {
            system("PAUSE");
        }
    }
    while (op!=9);
    return 0;
}

void somaValores()
{
    int a,b,soma;
    printf("Digite o valor para o primeiro valor:");
    scanf("%d",&a);
    printf("Digite o valor para o segundo valor:");
    scanf("%d",&b);
    soma=a+b;
    printf("A soma de %d + %d = %d\n",a,b,soma);
}

void subtraiValores()
{
    int a,b,subtrai;
    printf("Digite o valor para o primeiro valor:");
    scanf("%d",&a);
    printf("Digite o valor para o segundo valor:");
    scanf("%d",&b);
    subtrai=a-b;
    printf("A subtração de %d - %d = %d\n",a,b,subtrai);
}

void multiplicaValores()
{
    int a,b,multiplica;
    printf("Digite o valor para o primeiro valor:");
    scanf("%d",&a);
    printf("Digite o valor para o segundo valor:");
    scanf("%d",&b);
    multiplica=a*b;
    printf("A multiplicação de %d * %d = %d\n",a,b,multiplica);
}

void divideValores()
{
    int a,b;
    float divide;
    printf("Digite o valor para o primeiro valor:");
    scanf("%d",&a);
    printf("Digite o valor para o segundo valor:");
    scanf("%d",&b);
    divide= (float)a/b;
    printf("A divisão de %d / %d = %.2f\n",a,b,divide);
}
