#include <stdio.h>
#include "fonction.h"

void afficherMenu()
{
    printf("\n===== GESTION DE NOTES =====");
    printf("\n1. Saisir le nombre d'eleves");
    printf("\n2. Saisir les notes des eleves");
    printf("\n3. Afficher toutes les notes");
    printf("\n4. Afficher la moyenne d'un eleve");
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

void afficherNotes(int nombreEleve, int tab[30][3])
{
    printf("\nEleve  C1  C2  C3");
    int note1, note2, note3;
    for (int i = 0; i < nombreEleve; i++){
        note1 = tab[i][0];
        note2 = tab[i][1];
        note3 = tab[i][2];
        printf("\n   %d    %d    %d    %d", i+1, note1, note2, note3);
    }
}

float calculerMoyenneEleve(int choix, int tab[30][3])
{
    return (float)(tab[choix - 1][0] + tab[choix - 1][1] + tab[choix - 1][2])/(float)3;
}

float calculerMoyenneGenerale(int nombreEleve, int tab[30][3])
{
    float total = 0;
    int iteration = 0;
    do{
        total += calculerMoyenneEleve(iteration + 1, tab);
        iteration++;
    } while (iteration < nombreEleve - 1);
    return total/(float)nombreEleve;
}

int trouverMeilleureNoteControle(int controle, int nombreEleve, int tab[30][3])
{
    int meilleureNote = 0;
    for (int i = 0; i < nombreEleve; i++){
        if (meilleureNote < tab[i][controle - 1]) meilleureNote = tab[i][controle - 1];
    }
    return meilleureNote;
}

void afficherMeilleureNotes(int nombreEleve, int tab[30][3])
{
    for (int i = 1; i < 4; i++){
        int best = 0;
        best = trouverMeilleureNoteControle(i, nombreEleve, tab);
        printf("\nMeilleure note au controle %d : %d\n", i, best);
    }
}

// ==============================================================

void afficher_menu(){
    printf("=== BANQUE - DISTRIBUTEUR ===\n");
    printf("1. Faire un retrait\n");
    printf("2. Quitter\n");
}

int saisir_montant()
{
    int a = 0;
    printf("\nSaisissez le montant : ");
    scanf("%d", &a);
    return a;
}

int montant_valide(int a){
    if (a%5 != 0 || a < 5 || a > 1000) {
        printf("\nErreur : montant invalide\n");
        printf("Le montant doit etre entre 5 euros et 1000 euros, divisible par 5.");
        return 1;
    }
    return 0;
}

void calcul_distribution(int a){
    int cinquante = 0, vingt = 0, dix = 0, cinq = 0;
    if (a / 50 != 0) {
        cinquante = a / 50;
        a = a % 50;
    }
    if (a / 20 != 0) {
        vingt = a / 20;
        a = a % 20; 
    }
    if (a / 10 != 0){
        dix = a / 10;
        a = a % 10;
    }
    if (a / 5 != 0) {
        cinq = a / 5;
    }
    if (cinquante != 0) {
        printf("%d billets de 50\n", cinquante);
    }
    if (vingt != 0) {
        printf("%d billets de 20\n", vingt);
    }
    if (dix != 0) {
        printf("%d billets de 10\n", dix);
    }
    if (cinq != 0) {
        printf("%d billets de 5\n", cinq);
    }
}