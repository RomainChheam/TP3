#include <stdio.h>
#include "fonction.h"


int main()
{
    int choix = -1;
    int nombreEleve;
    do {
        afficherMenu();
        choix = lireChoix();
        switch (choix) {
            case 0 :
                return 0;
            case 1 :
                nombreEleve = saisirNombreEleve();
                break;
            case 2 :
                break;
            case 3 :
                break;
            case 4 :
                break;
            case 5 :
                break;
            case 6 :
                break;
            default :
                printf("Choix invalide");
                break;
        }
    } while (choix != 0);

    return 0;
}