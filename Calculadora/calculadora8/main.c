#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
    int op;
    float a,b;
    void leValores()
    {
    printf("Valores para calcular:\n");
    printf("Digite o 1 valor:");
    scanf("%d", &a);
    printf("Digite o 2 valor:");
    scanf("%d", &b);
    }
    leValores();
    do
    {
        menu();
        printf("Escolha:");
        scanf("%d",&op);
        switch (op)
        {
        case 1:
            somaValores(a,b);
            break;
        case 2:
            subtraiValores(a,b);
            break;
        case 3:
            multiplicaValores(a,b);
            break;]
        case 4:
            divideValores(a,b);
            break;
        case 5:
            leValores();
            break;
        }
        if (op!=9 && op!=5) {
            printf("O resultado da opera��o = %5.2f\n", r);
            system("PAUSE");
        }
    }
    while (op!=9);
    return 0;
}

void menu ()
{
system("CLS");
printf("menu:\n");
printf("1 - adi��o\n");
printf("2 - subtra��o\n");
printf("3 - multiplica��o\n");
printf("4 - divis�o\n");
printf("5 - novos numeros\n");
printf("9 - sair do programa\n");
}

void somaValores(float n1, float n2)
{
    r=n1+n2;
}

void subtraiValores(float numero1, float numero2)
{
    r=numero1-numero2;
}

void multiplicaValores(float valor1, float valor2)
{
    r=valor1*valor2;
}

void divideValores(float a, float b)
{
    r=(float)a/b;
}

