#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <locale.h>
#include <conio.h>

int main()
{

    setlocale(LC_ALL, "portuguese");

    int opcao;

    printf("\n 1. conversao de decimal para binario: \n\n");
    printf("\n 2. conversao de binario para decimal: \n\n");
    printf("\n 3. conversao de decimal para Hexadecimal: \n\n");
    printf("\n 4. conversao de Hexadecimal para decimal: \n\n");

    printf("\n\n\\\\\\digite o numero de que tipo de conversao vc quer fazer:");


    scanf("%d", &opcao);

    switch(opcao)
    {

    case 1:
        system("cls");
        decimalBinario();
        break;

    case 2:
        system("cls");
        binarioDecimal();
        break;

    case 3:
        system("cls");
        dectohex();
        break;

    case 4:
        system("cls");
        hextodec();
        break;

    default:
        printf("xxxxx Erro xxxxx");
    }
    return 0;
}

int decimalBinario()
{

    unsigned long long quociente, resto, divisao, resultado,numero;

    int voltar;

    printf("\n Escreva o numero a ser convertido para binario: ");
    scanf("%lld", &numero);

    quociente = numero;
    resultado = 1;

    while (quociente != 0 )
    {

        divisao = quociente/2;
        resto = quociente%2;
        quociente = divisao;
        resultado = resto + resultado*10;

    }

    printf(" \n o resultado é :");

    while(resultado != 1)
    {

        divisao = resultado/10;
        resto = resultado%10;
        resultado = divisao;

        printf("%lld", resto);
    }

    printf("\n\n\nDeseja voltar ao menu? Digite 0 , senao digite 1 e faça uma nova conversao:  ");
    scanf("%d", &voltar);

    switch (voltar)
    {

    case 0:
        system("cls");
        main();
        break;
    case 1:
        system("cls");
        decimalBinario();
        break;
    }

}

int binarioDecimal()
{

    unsigned long long numero, divisao, resultado, quociente, resto, indice;

    int voltar;

    printf("\n Escreva um binario a ser convertido para decimal: ");
    scanf("%lld", &numero);

    quociente = numero;
    resultado = 0;
    indice = 0;

    while (quociente != 0)
    {
        divisao = quociente/10;
        resto = quociente%10;
        quociente = divisao;
        resultado = resultado + resto * pow(2,indice);
        indice++;

    }

    printf("Resultado é: %lld", resultado);

    printf("\n\n\nDeseja voltar ao menu? Digite 0 , senao digite 1 e faça uma nova conversao:  ");
    scanf("%lld", &voltar);

    switch (voltar)
    {

    case 0:
        system("cls");
        main();
        break;
    case 1:
        system("cls");
        binarioDecimal();

    }
}

int dectohex()
{
    long int decimalNumber,remainder,quotient;
    int i=1,j,temp, voltar;
    char hexadecimalNumber[100];
    printf("Digite numero decimal: ");
    scanf("%ld",&decimalNumber);
    quotient = decimalNumber;
    while(quotient!=0)
    {
        temp = quotient % 16;

        if( temp < 10)
            temp =temp + 48;
        else
            temp = temp + 55;
        hexadecimalNumber[i++]= temp;
        quotient = quotient / 16;
    }
    printf("O valor em hexadecimal: ");
    for (j = i -1 ; j> 0; j--)
        printf("%c",hexadecimalNumber[j]);

    printf("\n\n\nDeseja voltar ao menu? Digite 0 , senao digite 1 e faça uma nova conversao:  ");
    scanf("%d", &voltar);

    switch (voltar)
    {

    case 0:
        system("cls");
        main();
        break;
    case 1:
        system("cls");
        dectohex();
        break;
    }
}

hextodec()
{
    int voltar;
    unsigned long decnum=0;
    char hex[9];
    printf(" Digite um numero Hexadecimal de 32-bit: ");
    scanf("%s", hex);

    char *hexstr;
    int length = 0;
    const int base = 16;

    int i;
    for (hexstr = hex; *hexstr != '\0'; hexstr++)
    {
        length++;
    }
    hexstr = hex;
    for (i = 0; *hexstr != '\0' && i < length; i++, hexstr++)
    {
        if (*hexstr >= 48 && *hexstr <= 57)
        {
            decnum += (((int)(*hexstr)) - 48) * pow(base, length - i - 1);
        }
        else if ((*hexstr >= 65 && *hexstr <= 70))
        {
            decnum += (((int)(*hexstr)) - 55) * pow(base, length - i - 1);
        }
        else if (*hexstr >= 97 && *hexstr <= 102)
        {
            decnum += (((int)(*hexstr)) - 87) * pow(base, length - i - 1);
        }
        else
        {
            printf("Numero Hexadecimal invalido \n");

        }
    }

    printf("Numero em Decimal %u \n", decnum);

    getch();

    printf("\n\n\nDeseja voltar ao menu? Digite 0 , senão digite 1 e faça uma nova conversao:  ");
    scanf("%d", &voltar);

    switch (voltar){

    case (0):
    system("cls");
    main();
    break;
    case (1):
    system("cls");
    hextodec();
    break;

}
}
