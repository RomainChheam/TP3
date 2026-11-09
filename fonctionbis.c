#include <stdio.h>
#include "fonctionbis.h"

int asksize()
{
    int size;
    printf("Choose star size (recommended 5 to 10):\n");
    scanf("%d", &size);
    return size;
}


void affichagetab(int width, int max_height, char tab[width][max_height])
{
    for (int i = 0; i < width; i++)
    {
        for (int j = 0; j < max_height && tab[i][j] != '\0'; j++)
        {
            printf("%c", tab[i][j]);
        }
        printf("\n");
    }
}