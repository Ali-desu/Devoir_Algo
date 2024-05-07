# Problème de Tri avec Pile

Ce problème porte sur le tri d'une séquence d'entiers à l'aide d'une pile. On dispose d'une classe `Pile` avec les méthodes suivantes :

- `p.empty()`: détermine si la pile `p` est vide.
- `p.push(x)`: empile `x` au sommet de la pile `p`.
- `p.pop()`: retourne et supprime le sommet de la pile `p`.
- `p.peek()`: retourne sans le supprimer le sommet de la pile `p`.

Une séquence est une permutation des entiers d'un intervalle [1, n] avec n ∈ ℕ. Une séquence est considérée comme triable par une pile si elle peut être ordonnée en utilisant les opérations suivantes :

- Empiler l'élément suivant de la séquence d'entrée.
- Dépiler le sommet de la pile en direction de la sortie.

## Objectif

L'objectif de ce problème est de développer un algorithme permettant de trier une séquence donnée en utilisant uniquement les opérations disponibles sur la pile.

## Méthode de résolution

Pour résoudre ce problème, nous devons concevoir un algorithme qui utilise les opérations de la pile de manière efficace pour trier la séquence. Nous pourrions envisager différentes stratégies, telles que l'utilisation d'une deuxième pile pour aider au tri, ou la manipulation habile des opérations de push et pop pour obtenir le résultat souhaité.

## Instructions

1. Implémenter une solution qui trie une séquence donnée en utilisant les opérations de la pile.
2. Tester l'algorithme avec différents ensembles de données pour s'assurer de sa fiabilité et de son efficacité.
3. Documenter le code pour expliquer le fonctionnement de l'algorithme et faciliter sa compréhension par d'autres personnes.
4. Analyser la complexité temporelle et spatiale de l'algorithme pour évaluer ses performances dans divers scénarios.

En résolvant ce problème, nous renforcerons nos compétences en algorithmique et en programmation, ainsi que notre compréhension des structures de données et de leur utilisation dans la résolution de problèmes complexes.
