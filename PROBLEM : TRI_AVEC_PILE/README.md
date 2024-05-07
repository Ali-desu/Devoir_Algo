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

- Un programme est écrit en C et se trouve dans le fichier Tri_Pile.c dédié. Il vise à évaluer le tri de piles en utilisant différents tableaux d'entrée.

## Question 2.

Si dans la séquence a, le motif (2, 3, 1) est présent, cela signifie qu'il existe des indices i, j et k tels que ces éléments soient ordonnés comme suit dans a : ... j ... k ... i ... .
Supposons que i soit inférieur à j et k. À ce stade, i doit encore être dans la pile lorsque j y entre. Mais alors, j est situé sous k, et les éléments de la pile ne sont pas ordonnés par ordre croissant à partir du sommet. Cela implique que a n'est pas triable.
Réciproquement, si a n'est pas triable, cela signifie qu'il existe une étape bloquante pour l'algorithme précédent. Notons j le premier élément à ne pas pouvoir sortir de la pile. On sait que j > 2 (car 1 peut toujours sortir), donc examinons le moment où j - 1 est sorti de la pile. À ce stade, j est déjà dans la pile car sinon il pourrait également sortir. De plus, j - 1 ne peut pas être immédiatement en dessous de j. Appelons donc k l'élément situé juste en dessous de j - 1.
Puisque k n'est pas encore sorti, cela signifie que k > j - 1. Et comme mentionné précédemment, k ne peut pas être égal à j, donc k > j.
Ainsi, posons i = j - 1. Nous avons maintenant i < j < k, et compte tenu de leurs positions relatives dans la pile, nous avons a = ... j ... k ... i ..., ce qui montre que (2, 3, 1) est bien un motif de a.

## Question 3.
