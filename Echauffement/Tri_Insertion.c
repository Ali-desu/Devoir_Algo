#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int *genererTableau(int taille) {
    // Allouer de la mémoire pour le tableau
    int *tableau = (int *)malloc(taille * sizeof(int));

    // Vérifier si l'allocation de mémoire a réussi
    if (tableau == NULL) {
        printf("Erreur: Impossible d'allouer de la mémoire.\n");
        exit(1); // Quitter le programme avec un code d'erreur
    }

    // Remplir le tableau avec des nombres aléatoires
    for (int i = 0; i < taille; i++) {
        tableau[i] = rand() % 100; // Générer un nombre aléatoire entre 0 et 99
    }

    // Retourner le tableau généré
    return tableau;
}

void afficherTableau(int T[],int n){
    for(int i = 0; i < n; i++){
        printf("%d ", T[i]);
    }
    printf("\n");

}


void triInsertion(int T[] , int n){
    int i, j, cle;
    for(i = 1; i < n; i++){
        cle = T[i];
        j = i - 1;
        while(j >= 0 && T[j] > cle){
            T[j + 1] = T[j];
            j = j - 1;
        }
        T[j + 1] = cle;
    }
}

void triInsertionDich(int T[] , int n){
    int i, j, cle, g, d, m;
    for(i = 1; i < n; i++){
        cle = T[i];
        g = 0;
        d = i - 1;
        while(g <= d){
            m = (g + d) / 2;
            if(T[m] > cle){
                d = m - 1;
            }else{
                g = m + 1;
            }
        }
        for(j = i - 1; j >= g; j--){
            T[j + 1] = T[j];
        }
        T[g] = cle;
    }
}

// Fonction pour le tri par insertion des chaînes de caractères
void triInsertionChaine(char T[], int n) {
    int i, j, cle, g, d, m;
    for(i = 1; i < n; i++){
        cle = T[i];
        g = 0;
        d = i - 1;
        while(g <= d){
            m = (g + d) / 2;
            if(T[m] > cle){
                d = m - 1;
            }else{
                g = m + 1;
            }
        }
        for(j = i - 1; j >= g; j--){
            T[j + 1] = T[j];
        }
        T[g] = cle;
    }
}

int main(){
   
   int n;
    printf("Donner la taille du tableau : ");
    scanf("%d", &n);
    
    /* Créer un tableau de taille n et le remplir avec des nombres aléatoires */
    int *T = genererTableau(n);

    printf("Tableau initial : ");
    afficherTableau(T, n);

    /* Tri par insertion */
    printf("Tri par insertion\n");
    triInsertion(T, n);
    printf("Tableau trie : \n");
    afficherTableau(T, n);

    /* Tri par insertion dichotomique */
    printf("\nTri par insertion dichotomique\n");
    triInsertionDich(T, n);
    printf("Tableau trie par insertion dichotomique : \n");
    afficherTableau(T, n);

    /*trier une chaine de caracteres */
    char chaine[] = "BACDZEF";

    printf("Chaine de caracteres : %s\n", chaine);
    printf("Tri de la chaine de caracteres\n");
    triInsertion(chaine, 7);
    printf("Chaine de caracteres triee : %s\n", chaine);


    return 0;
}
