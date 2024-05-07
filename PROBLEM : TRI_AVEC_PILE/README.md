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

Si dans la séquence a, le motif (2, 3, 1) est repérable, cela signifie qu'il existe des positions i, j et k telles que ces éléments soient ordonnés comme suit dans a : ... j ... k ... i ... .
Si i est inférieur à j et k, alors i doit encore être dans la pile lorsque j est empilé. Dans ce cas, j se trouve sous k, ce qui brise l'ordre croissant attendu des éléments dans la pile. En conséquence, a n'est pas triable.


Inversement, si a n'est pas triable, cela signifie qu'il y a un point de blocage lors du processus de tri. Supposons que j soit le premier élément à ne pas pouvoir sortir de la pile. Comme j > 2 (car 1 peut toujours sortir), examinons le moment où j - 1 est retiré de la pile. À ce stade, j est déjà dans la pile, sinon il pourrait également sortir. De plus, j - 1 ne peut pas être immédiatement en dessous de j. Appelons k l'élément juste en dessous de j - 1.
Comme k n'est pas encore sorti, cela signifie que k > j - 1. Étant donné que k ne peut pas être égal à j, nous pouvons définir i = j - 1. Ainsi, nous avons i < j < k, et compte tenu de leurs positions dans la pile, nous avons a = ... j ... k ... i ..., ce qui confirme que (2, 3, 1) est effectivement un motif de a.

## Question 3.

Imaginons une séquence triable a de l'intervalle [1,n] et identifions k comme la position de l'entier n dans cette séquence.

Définissons b comme la séquence des k - 1 entiers précédant n, et c comme la séquence des n - k entiers qui le suivent. Si x appartient à b et y appartient à c, alors (x,n,y) forme un motif de a, ce qui implique que x < y < n (sinon a ne serait pas triable).

Par conséquent, b est une séquence triable de [1,k - 1]  et c une séquence triable de [k,n - 1] (triables car ne comportant pas le motif (2,3,1)).

Il existe c(k - 1) possibilités pour b et c(n - k) pour c, donc le nombre de séquences triables cn est égal à ∑<sub>k=1</sub><sup>n</sup> c(k - 1) c(n - k).
