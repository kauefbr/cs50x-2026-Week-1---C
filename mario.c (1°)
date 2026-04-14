#include <stdio.h>
#include <cs50.h>

int main (void)
{   //linha que determina o tamanho da pirâmide
    int p = get_int("WHAT\'S THE NUMBER ?\n");
    //loop caso tentem sabotar a linha 5
    while (p<=0)
    {   //Mesmo codigo da linha 5, agora integrado no loop
        p = get_int("WHAT\'S THE NUMBER ?\n");
    }
    //Loop que faz a pirâmide se formar
    for (int i = 0; i < p; i++)
    {   //loop que cria os espaços em branco para que a pirâmide começe da esquerda para a direita
        for (int j = 0; j < p - i - 1; j++)
        {
            printf(" ");
        }
            //loop impressor dos hashes
            for (int j = -1; j < i; j++)
            {
                printf("#");
            }
        //Linha que faz a pirâmide não ficar em linha reta
        printf("\n");
    }
}
