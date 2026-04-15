#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Pede ao usuário um número inteiro (valor em centavos)
    int n = get_int("What's the number?\n");

    // Loop que garante que o usuário digite um número válido (não negativo)
    while (n < 0)
    {
        printf("Need be one number INT\n");
        n = get_int("What's the number?\n");
    }

    // Calcula quantas moedas de 25 (quarters) cabem no valor
    int divisao = n / 25;

    // Calcula o resto após remover as moedas de 25
    int resto = n % 25;

    // Calcula quantas moedas de 10 (dimes) cabem no resto
    int por10 = resto / 10;

    // Calcula o resto após remover as moedas de 10
    int resto2 = resto % 10;

    // Calcula quantas moedas de 5 (nickels) cabem no resto
    int por5 = resto2 / 5;

    // Calcula o resto após remover as moedas de 5
    int por1 = resto2 % 5;

    // Calcula quantas moedas de 1 (pennies) são necessárias
    int por = por1 / 1;

    // Soma total de moedas utilizadas
    int iss = divisao + por10 + por5 + por;

    // Imprime o número mínimo de moedas
    printf("%i\n", iss);
}
