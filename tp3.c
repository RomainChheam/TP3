#include <stdio.h>
#include "fonction.h"


int main()
{
    int choix = -1;
    int tailleTabEleve = 30;
    int tailleNote = 3;
    int nombreEleve = 1;
    int tabNote[tailleTabEleve][tailleNote];
    float moyenne;
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
                saisirNotes(nombreEleve, tabNote);
                for (int i = 0; i < nombreEleve; i++){
                    printf("\n\nEleve %d", i+1);
                    for (int j = 0; j < tailleNote; j++){
                        printf("\n  Note %d : %d", j+1, tabNote[i][j]);
                    }
                }
                break;
            case 3 :
                afficherNotes(nombreEleve, tabNote);
                break;
            case 4 :
                moyenne = calculerMoyenneEleve(nombreEleve, tabNote);
                printf("Moyenne de l'eleve : %2f", moyenne);
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