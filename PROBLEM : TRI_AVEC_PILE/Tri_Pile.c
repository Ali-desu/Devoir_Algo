#include <stdio.h>
#include <stdlib.h>

// Structure of a pile
typedef struct {
    int *tableau;
    int taille;
    int sommet;
} pile;

// Function to initialize a pile
void init_pile(pile *p, int taille) {
    p->tableau = (int *)malloc(taille * sizeof(int));
    if (p->tableau == NULL) {
        printf("Erreur: Impossible d'allouer de la mémoire.\n");
        exit(1);
    }
    p->taille = taille;
    p->sommet = -1;
}

// Function to push an element onto a pile
void push(pile *p, int x) {
    if (p->sommet == p->taille - 1) {
        printf("Erreur: Impossible de pousser, la pile est pleine.\n");
        exit(1);
    }
    p->sommet++;
    p->tableau[p->sommet] = x;
}

// Function to pop the top element from a pile
int pop(pile *p) {
    if (p->sommet == -1) {
        printf("Erreur: Impossible de dépiler, la pile est vide.\n");
        exit(1);
    }
    return p->tableau[p->sommet--];
}

// Function to check if a pile is empty
int empty(const pile *p) {
    return p->sommet == -1;
}

// Function to check if a pile is full
int est_pleine(const pile *p) {
    return p->sommet == p->taille - 1;
}

// Function to display the contents of a pile
void afficher_pile(const pile *p) {
    for (int i = 0; i <= p->sommet; i++) {
        printf("%d ", p->tableau[i]);
    }
    printf("\n");
}

// Function to return the top element of a pile without removing it
int peek(const pile *p) {
    if (p->sommet == -1) {
        printf("Erreur: Impossible de retourner le sommet, la pile est vide.\n");
        exit(1);
    }
    return p->tableau[p->sommet];
}

// Function to perform the pile sort
int triPile( int a[], int n) {
    int k = 0;
    int s = 0;
    pile stack;
    init_pile(&stack, n);

    for (int i = 0; i < 2 * n; i++) {
        if (!empty(&stack) && peek(&stack) == s + 1) {
            s = pop(&stack);
        } else if (k < n) {
            push(&stack, a[k++]);
        } else {
            return 0;
        }
    }
    return 1;
}

//fonction qui permet de déterminer si une séquence est triable ou non
void triable(int a[], int n){
    printf("La sequence ");
    afficherTableau(a, n);

    if(triPile(a, n)){
        printf("est triable\n");
    }
    else{
        printf("n'est pas triable\n");
    }
}

// fonction qui affiche un tableau
void afficherTableau(int T[],int n){
    printf("[ ");
    for(int i = 0; i < n; i++){
        printf("%d ", T[i]);
    }
    printf("] ");
}

int main() {
    int a[] = {2, 4, 3, 1};
    int taille_a = sizeof(a) / sizeof(a[0]);
    triable(a, taille_a); // sequence non triable

    int b[] = {2, 1, 3, 4};
    int taille_b = sizeof(b) / sizeof(b[0]);
    triable(b, taille_b); // triable

    return 0;
}
