#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//structure d'une pile
typedef struct pile{
    int *tableau;
    int taille;
    int sommet;
}pile;

/**
 * @brief Fonction qui initialise une pile
 * 
 * @param p 
 * @param taille 
 */
void init_pile(pile* p, int taille){
    p->tableau = (int *)malloc(taille * sizeof(int));
    if(p->tableau == NULL){
        printf("Erreur: Impossible d'allouer de la mémoire.\n");
        exit(1);
    }
    p->taille = taille;
    p->sommet = -1;
}

/**
 * @brief Fonction qui empile un élément dans une pile
 * 
 * @param p 
 * @param x 
 */
void push(pile* p, int x){
    if(p->sommet == p->taille - 1){
        printf("Erreur: Impossible d'push, la pile est pleine.\n");
        exit(1);
    }
    p->sommet++;
    p->tableau[p->sommet] = x;
    p->taille++;
}

/**
 * @brief Fonction qui dépile le sommet d'une pile et le supprime 
 * 
 * @param p 
 * @return int 
 */
int pop(pile* p){
    if(p->sommet == -1){
        printf("Erreur: Impossible de dépiler, la pile est vide.\n");
        exit(1);
    }
    p->taille--;
    return p->tableau[p->sommet--];

}

/**
 * @brief Fonction qui teste si une pile est vide
 * 
 * @param p 
 * @return int 
 */
int empty(const pile* p){
    return p->sommet == -1;
}

/**
 * @brief Fonction qui teste si une pile est pleine
 * 
 * @param p 
 * @return int 
 */
int est_pleine(const pile* p){
    return p->sommet == p->taille - 1;
}

/**
 * @brief Fonction qui affiche le contenu d'une pile
 * 
 * @param p 
 */
void afficher_pile(const pile* p){
    for(int i = 0; i <= p->sommet; i++){
        printf("%d ", p->tableau[i]);
    }
    printf("\n");
}

/**
 * @brief Fonction qui retourne le sommet d'une pile sans le supprimer
 * 
 * @param p 
 * @return int 
 */

int peek(const pile* p){
    if(p->sommet == -1){
        printf("Erreur: Impossible de retourner le sommet, la pile est vide.\n");
        exit(1);
    }
    return p->tableau[p->sommet];
}


/**
 * @brief Fonction principale
 * 
 * @return int 
 */

int main(){

    pile p; //creation d'une pile
    
    init_pile(&p, 5); //initialisation de la pile avec un tableau de taille 5

    push(&p, 4); //push 4 dans la pile
    push(&p, 3);
    push(&p, 2);
    push(&p, 1);
    push(&p, 0);

    afficher_pile(&p); //afficher le contenu de la pile

    printf("Sommet : %d\n", peek(&p)); //retourner le sommet de la pile (0)
    pop(&p); //pop
    afficher_pile(&p);
    push(&p , 4);
    afficher_pile(&p);
    printf("Sommet : %d\n", peek(&p)); //retourner le sommet de la pile (1)

    return 0;
}
