#include <cs50.h>
#include <stdio.h>

int main(void)
{ // linha que determina o tamanho da pirâmide:
    int height = get_int("Height?\n");
    // loop caso tentem sabotar a entrada:
    while (height <= 0)
    {
        height = get_int("Height?\n");
    }
    // Loop que faz a pirâmide se formar:
    for (int i = 0; i < height; i++)
    { // loop que cria os espaços em branco para que a pirâmide começe da esquerda para a direita:
        for (int j = 0; j < height - i - 1; j++)
        {
            printf(" ");
        }
        // loop impressor dos hashes:
        for (int j = 0; j <= i; j++)
        {
            printf("#");
        }
        // linha que separa a pirâmide ao meio:
        printf("  ");
        // impressor de hashes:
        for (int j = 0; j <= i; j++)
        {
            printf("#");
        }
        // Linha que faz a pirâmide não ficar em linha reta:
        printf("\n");
    }
}
