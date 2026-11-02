#include <stdio.h>
#include "fonction.h"


int main()
{
    int choix;
    do {
        afficherMenu();
        choix = lireChoix();
    } while (choix != 0);

    return 0;
}