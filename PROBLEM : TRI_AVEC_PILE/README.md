# Solution du Problème de Tri avec Pile

## Question 1.

### a) 
Pour la séquence (2,4,1,3), elle n’est pas triable car il est impossible de trier la sous-séquence (2,4,1).
La séquence (3,1,2,5,4) peut être triée en suivant la séquence d'opérations EEDEDDEEDD.
En revanche, la séquence (4,5,3,7,2,1,6) n’est pas triable car la sous-séquence (4,5,3) ne peut pas être triée.

### b) 
Supposons qu’à un certain stade du tri, il existe deux éléments i et j dans la pile tels que i < j et que i soit situé en dessous de j. Dans cette situation, i ne peut sortir de la pile avant j, ce qui est contradictoire avec le processus de tri. Ainsi, à tout moment du tri, la pile est triée par ordre croissant à partir de son sommet.

### c) 
Considérons le prochain élément à devoir sortir de la pile pendant le tri. S'il se trouve au sommet de la pile, il doit être retiré à l'étape suivante pour éviter d'être recouvert par un autre élément. Si l'élément ne se trouve pas au sommet de la pile, la seule opération possible est d'empiler le prochain élément de la séquence à trier, s'il en reste. Ainsi, le processus de tri est déterministe à chaque étape.

