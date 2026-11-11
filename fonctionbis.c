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

void piedetoile(int size, int width, int max_height, char tab[max_height][width])
{
    int mid = width / 2;
    int debut_gauche = 3 * (size - 3);
    int debut_droite = width - 1 - debut_gauche;

    for (int i = 0; i < size; i++)
    {
        int colonne = 2 * size - 1 + i;
        int gauche = debut_gauche - i;
        int droite = debut_droite + i;

        if (i == 0)
        {
            tab[colonne][gauche] = '.';
            tab[colonne][droite] = '.';
            for (int j = gauche + 1; j < droite; j++)
            {
                tab[colonne][j] = 'S';
            }
        }
        else
        {
            int inter_gauche = mid - 2 * i;
            int inter_droite = mid + 2 * i;

            tab[colonne][gauche] = '.';
            tab[colonne][inter_gauche] = '"';
            for (int j = gauche + 1; j < inter_gauche; j++)
            {
                tab[colonne][j] = 'S';
            }

            tab[colonne][inter_droite] = '"';
            tab[colonne][droite] = '.';
            for (int j = inter_droite + 1; j < droite; j++)
            {
                tab[colonne][j] = 'S';
            }
        }
    }
    // Bonjour (ou bonsoir cela dépend de quand vous regardez ça)
    // J'ai essayé de faire en sorte que les jambes de l'étoile aient un sens, j'ai réussi à bien centrer le tout
    // Cependant la rendre belle est vrmt pénible, donc j'ai réussi à faire un résultat assez satisfaisant
    // Après c'est pas très beau, on dirait un chapeau mexicain qui s'est fait pousser des jambes
    // Ou peut être Patrick l'étoile de mer en tenue de vol je sais pas trop
    // Tout ça pour dire que le résultat n'est pas très satisfaisant et j'en suis sincèrement désolé
    /*PS : Moi je la trouve très belle mon étoile même si objectivement c'est pas une étoile*/
}