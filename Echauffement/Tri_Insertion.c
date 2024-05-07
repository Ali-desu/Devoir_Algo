#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h> // Ajout de la bibliothèque pour mesurer le temps

int *genererTableau(int taille) {
    int *tableau = (int *)malloc(taille * sizeof(int));
    if (tableau == NULL) {
        printf("Erreur: Impossible d'allouer de la mémoire.\n");
        exit(1);
    }
    for (int i = 0; i < taille; i++) {
        tableau[i] = rand() % 100;
    }
    return tableau;
}

void afficherTableau(int T[], int n){
    for(int i = 0; i < n; i++){
        printf("%d ", T[i]);
    }
    printf("\n");
}

//fonction tri par insertion classique

void triInsertion(int T[], int n){
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


//fonction tri par insertion a recherche dichotomique

void triInsertionDich(int T[], int n){
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

//fonction de tri par insertion des chaines de caracteres

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

// Fonction pour calculer le temps pris par une fonction de tri
double calculerTemps(void (*fonctionTri)(int[], int), int T[], int n) {
    clock_t debut, fin;
    double temps;

    debut = clock();
    fonctionTri(T, n);
    fin = clock();

    temps = ((double) (fin - debut)) / CLOCKS_PER_SEC;
    return temps;
}

int main(){
    int n;
    
    n = 1000;
    int *T = genererTableau(n);

    printf("**************************************************\n");
    printf("Tableau initial de taille %d\n", n);
    printf("**************************************************\n");

    double tempsTriInsertion = calculerTemps(triInsertion, T, n);
    printf("Tableau trié par insertion en [ %f ] secondes\n", tempsTriInsertion);

    double tempsTriInsertionDich = calculerTemps(triInsertionDich, T, n);
    printf("Tableau trié par insertion dichotomique en [ %f ] secondes\n", tempsTriInsertionDich);
    printf("\n");

    n = 10000;

    T = genererTableau(n);

    printf("**************************************************\n");
    printf("Tableau initial de taille %d\n", n);
    printf("**************************************************\n");

    tempsTriInsertion = calculerTemps(triInsertion, T, n);
    printf("Tableau trie par insertion en [ %f ] secondes\n", tempsTriInsertion);

    tempsTriInsertionDich = calculerTemps(triInsertionDich, T, n);
    printf("Tableau trie par insertion dichotomique en [ %f ] secondes\n", tempsTriInsertionDich);
    printf("\n");

    n = 100000;

    T = genererTableau(n);

    printf("**************************************************\n");
    printf("Tableau initial de taille %d\n", n);
    printf("**************************************************\n");

    tempsTriInsertion = calculerTemps(triInsertion, T, n);
    printf("Tableau trie par insertion en [ %f ] secondes\n", tempsTriInsertion);

    tempsTriInsertionDich = calculerTemps(triInsertionDich, T, n);
    printf("Tableau trie par insertion dichotomique en [ %f ] secondes\n", tempsTriInsertionDich);
    printf("\n");

    return 0;
}


