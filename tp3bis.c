#include <stdio.h>
#include "fonctionbis.h"

int main()
{
    int size = asksize();
    int width = size * size;
    int max_height = 3 * size - 1;
    char tab[width][max_height + 1];

    for (int i = 0; i < width; i++)
    {
        for (int j = 0; j < max_height; j++)
        {
            tab[i][j] = '1';
        }

        tab[i][max_height] = '\0';
    }
    affichagetab(width, max_height + 1, tab);
}