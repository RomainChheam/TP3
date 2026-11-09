#include <stdio.h>
#include "fonctionbis.h"

int main()
{
    int size = asksize();
    int width = size * size;
    int max_height = 3*size-1;
    char tab[width][max_height];
    for (int i = 0; i < width; i++)
    {
        for (int j = 0; j < max_height; j++)
        {
            tab[i][j] = ' ';
        }
    }

    // affichage
    for (int i = 0; i < width; i++)
    {
        for (int j = 0; j < max_height; j++)
        {
            printf("%c", tab[i][j]);
        }
        printf("\n");
    }
    return 0;
}