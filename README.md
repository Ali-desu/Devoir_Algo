# Problème de Tri avec Pile

Ce dépôt contient l'énoncé du problème à résoudre, ainsi que sa solution. 

Le problème est traité dans le dossier TRI_PILE. Vous trouverez l'énoncé détaillé du problème dans ce dossier, ainsi que la solution implémentée en code.

N'hésitez pas à explorer les fichiers pour plus d'informations.


# Problème de Tri avec Pile

Ce problème porte sur le tri d'une séquence d'entiers à l'aide d'une pile. On dispose d'une classe `Pile` avec les méthodes suivantes :

- `p.empty()`: détermine si la pile `p` est vide.
- `p.push(x)`: empile `x` au sommet de la pile `p`.
- `p.pop()`: retourne et supprime le sommet de la pile `p`.
- `p.peek()`: retourne sans le supprimer le sommet de la pile `p`.

Une séquence est une permutation des entiers d'un intervalle [1, n] avec n ∈ ℕ. Une séquence est considérée comme triable par une pile si elle peut être ordonnée en utilisant les opérations suivantes :

- Empiler l'élément suivant de la séquence d'entrée.
- Dépiler le sommet de la pile en direction de la sortie.

## Problème à traiter

Nous allons aborder les questions suivantes :

### Question 1
a) Parmi les séquences suivantes, lesquelles peuvent être triées par une pile ? (2,4,1,3), (3,1,2,5,4), (4,5,3,7,2,1,6). <br>
b) Montrer que lors d'un tri réussi, les éléments de la pile sont à tout moment rangés par ordre croissant (en partant du sommet). <br>
c) Justifier que si une séquence est triable par une pile, il existe une unique manière de la trier, et en déduire une fonction `triPile(a)` qui prend en argument une séquence représentée par une liste `a` et qui retourne un booléen traduisant si la séquence est triable ou pas.

### Question 2
Soient 1 <= k <= n deux entiers, `a` une séquence de longueur `n` et `b` une séquence de longueur `k`. On dit que `b` est un motif de `a` s'il existe 1 <= i1 < i2 < ··· < ik <= n tel que `b` et `(ai1, ai2, ..., aik)` soient isomorphes pour la relation d'ordre.
Par exemple, `(1,3,2,4)` est un motif de `(3,1,2,8,5,4,7,9,6)` car `(1,3,2,4)` et `(2,5,4,9)` sont isomorphes.
Montrer qu’une séquence `a` est triable par une pile si et seulement si `(2, 3, 1)` n’est pas un motif de `a`.

### Question 3
On note `cn` le nombre de séquences triables de [1,n]. À l’aide de la question précédente, prouver que `cn+1 = Σ (k=0 à k=n) ck * cn-k` (avec la convention c0 = 1). De cette relation il résulte que `cn` est égal au n nombre de catalan, dont la valeur est : `cn = (1/n+1)(2n n)`.

En résolvant ces questions, nous approfondirons notre compréhension du problème de tri avec une pile et développerons nos compétences en résolution de problèmes algorithmiques.
