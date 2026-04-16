#include <cs50.h>
#include <stdio.h>

int main(void)
{
    long card = get_long("Number: ");

    int contador = 0;
    int soma = 0;

    long copia = card;
    while (copia > 0)
    {
        int digito = copia % 10;
        if (contador % 2 == 1)
        {
            int numero = digito * 2;
            if (numero > 9)
            {
                numero = numero - 9;
            }
            soma += numero;
        }
        else
        {
            soma += digito;
        }
        copia = copia / 10;
        contador++;
    }

    if (soma % 10 != 0)
    {
        printf("INVALID\n");
    }
    else
    {
        printf("VALID\n");
    }

    int tamanho = 0;
    long inicio = card;
    while (inicio >= 100)
    {
        inicio /= 10;
    }

    long copia2 = card;
    while (copia2 > 0)
    {
        copia2 /= 10;
        tamanho++;
    }

    if ((inicio == 34 || inicio == 37) && tamanho == 15)
    {
        printf("AMEX\n");
    }
    else if ((inicio >= 51 && inicio <= 55) && tamanho == 16)
    {
        printf("MASTERCARD\n");
    }
    else if ((inicio / 10 == 4) && (tamanho == 13 || tamanho == 16))
    {
        printf("VISA\n");
    }
    else
    {
        printf("INVALID");
    }
}
