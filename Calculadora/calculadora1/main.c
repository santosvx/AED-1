#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int a, b;
float r;
int main()
{
    setlocale(LC_ALL, "portuguese");
    int op;
    leValores();
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
            leValores();
            break;
        }
        if (op!=9 && op!=5) {
            printf("O resultado da operação = %5.2f\n", r);
            system("PAUSE");
        }
    }
    while (op!=9);
    return 0;
}

void leValores()
{
    printf("Valores para calcular:\n");
    printf("Digite o 1 valor:");
    scanf("%d", &a);
    printf("Digite o 2 valor:");
    scanf("%d", &b);
}

void menu ()
{
system("CLS");
printf("menu:\n");
printf("1 - adição\n");
printf("2 - subtração\n");
printf("3 - multiplicação\n");
printf("4 - divisão\n");
printf("5 - novos numeros\n");
printf("9 - sair do programa\n");
}

void somaValores()
{
    r=a+b;
}

void subtraiValores()
{
    r=a-b;
}

void multiplicaValores()
{
    r=a*b;
}

void divideValores()
{
    r=(float)a/b;
}
