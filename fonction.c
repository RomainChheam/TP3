#include <stdio.h>
#include "fonction.h"

void afficherMenu()
{
    printf("\n===== GESTION DE NOTES =====");
    printf("\n1. Saisir le nombre d'eleves");
    printf("\n2. Saisir les notes des eleves");
    printf("\n3. Afficher toutes les notes");
    printf("\n4. Afficher le moyenne d'un eleve");
    printf("\n5. Afficher la moyenne generale");
    printf("\n6. Afficher la meilleure note de chaque controle");
    printf("\n0. Quitter");
}

int lireChoix()
{
    int choix;
    printf("\nVotre choix : ");
    scanf("%d", &choix);
    return choix;
}

int saisirNombreEleve()
{
    int choix = 0;
    while (choix < 1 || choix > 30) {
        printf("\nEntrez le nombre d'eleve (1 a 30) : ");
        scanf("%d", &choix);
        if (choix < 1 || choix > 30) {
            printf("Choix invalide");
        } else return choix;
    }
}

void saisirNotes(int nombre, int tab[30][3])
{
    for (int i = 0; i < nombre; i++){
        printf("Eleve %d :", i+1);
        for (int j = 0; j < 3; j++){
            int choix = 1;
            int ok = 0;
            while (ok != 1){
                printf("\n  Note du controle %d (0 a 20): ", j+1);
                scanf("%d", &choix);
                if (choix < 0 || choix > 20) {
                    printf("Choix invalide");
                } else {
                    tab[i][j] = choix;
                    ok = 1;
                }
            }
        }
    }
}