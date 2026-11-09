#include <stdio.h>
#include "fonctionbis.h"

int asksize()
{
    int size;
    printf("Choose star size (recommended 5 to 10):\n");
    scanf("%d", &size);
    return size;
}


void affichagetab(int max_height, int width, char tab[max_height][width])
{
    for (int i = 0; i < max_height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            printf("%c", tab[i][j]);
        }
        printf("\n");
    }
}

void pointe(int size, int width, int max_height, char tab[max_height][width])
{
    int mid = width / 2;

    for (int i = 0; i < size; i++)
    {
        tab[i][mid - i] = 'A';
        tab[i][mid + i] = 'A';

        for (int j = mid - i + 1; j < mid + i; j++)
        {
            tab[i][j] = 'S';
        }
    }

    for (int k = 0; k < width; k++)
    {
        tab[size - 1][k] = '=';
    }
}

void corpsetoile(int size, int width, int max_height, char tab[max_height][width])
{
    int mid = width / 2;

    for (int i = 0; i < size; i++)
    {
        int gauche = i;
        int droite = width - 1 - i;
        if (i == 0)
        {
            tab[size + i][gauche] = '*';
            tab[size + i][droite] = '*';
        }
        else
        {
            tab[size + i][gauche] = '\\';
            tab[size + i][droite] = '/';
        }

        for (int saucisse = gauche + 1; saucisse < droite; saucisse++) // Demandez pas trop pourquoi saucisse j'ai juste faim
        {
            tab[size + i][saucisse] = 'S';
        }
    }
}