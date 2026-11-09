#include <stdio.h>
#include "fonctionbis.h"

int main()
{
    int size = asksize();
    int width = size * size;
    int max_height = 3 * size - 1;
    char tab[max_height][width];

    for (int i = 0; i < max_height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            tab[i][j] = ' ';
        }

        tab[i][width] = '\0';
    }
    pointe(size, width, max_height, tab);
    affichagetab(max_height, width, tab);
    return 0;
}