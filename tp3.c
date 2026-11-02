#include <stdio.h>
#include "fonction.h"


int main()
{
    int best = 0;
    int choix = -1;
    int tailleTabEleve = 30;
    int tailleNote = 3;
    int nombreEleve = 1;
    int tabNote[tailleTabEleve][tailleNote];
    int indice = -1;
    float moyenne, moyenneClasse;
    do {
        afficherMenu();
        choix = lireChoix();
        switch (choix) {
            case 0 :
                break;
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
                while (indice < 1 || indice > nombreEleve){
                    printf("Entrez l'indice de l'eleve (1 a %d): ", nombreEleve);
                    scanf("%d", &indice);
                }
                moyenne = calculerMoyenneEleve(nombreEleve, tabNote);
                printf("Moyenne de l'eleve : %.2f", moyenne);
                break;
            case 5 :
                moyenneClasse = calculerMoyenneGenerale(nombreEleve, tabNote);
                printf("Moyenne de la classe : %.2f", moyenneClasse);
                break;
            case 6 :
                afficherMeilleureNotes(nombreEleve, tabNote);
                break;
            default :
                printf("Choix invalide");
                break;
        }
    } while (choix != 0);

    /*========================================= EXERCICE 2 ==========================================*/

    int choix2 = 0;
    do {
        int saucisse;
        afficher_menu();
        printf("\nVotre choix : ");
        scanf("%d", &choix2);
        if (choix2 == 1){
            saucisse = saisir_montant();
            if (montant_valide(saucisse) == 0) 
            {
                calcul_distribution(saucisse);
            }
        } else if (choix2 != 2){
            printf("\nChoix invalide\n");
        }
    } while (choix2 != 2);
    return 0;
}