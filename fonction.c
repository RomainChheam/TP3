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