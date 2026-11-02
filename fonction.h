#ifndef FONCTION
#define FONCTION


void afficherMenu();
int lireChoix();
int saisirNombreEleve();
void saisirNotes(int nombre, int tab[30][3]);
void afficherNotes(int nombreEleve, int tab[30][3]);
float calculerMoyenneEleve(int nombreEleve, int tab[30][3]);
float calculerMoyenneGenerale(int nombreEleve, int tab[30][3]);
void afficherMeilleureNotes(int nombreEleve, int tab[30][3]);

// ================================================================

void afficher_menu();
int saisir_montant();
int montant_valide(int a);
#endif