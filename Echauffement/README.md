# Introduction

Ce programme compare la complexité théorique et pratique de deux algorithmes de tri. Il génère un tableau aléatoire, le trie , puis mesure le temps pris par chaque algorithme.


# Complexité théorique et pratique

## Tri par insertion

Le tri par insertion a une complexité théorique de O(n^2). Cependant, dans la pratique, son temps d'exécution peut être influencé par la disposition des éléments dans le tableau. Dans le pire des cas, lorsque le tableau est inversé, le temps d'exécution est maximal.

## Tri par insertion dichotomique

Le tri par insertion dichotomique a une complexité théorique de O(n^2), mais il est généralement plus efficace que le tri par insertion. Sa complexité pratique dépend également de la disposition des éléments dans le tableau.

## Tri de chaîne de caractères

Le tri de chaîne de caractères utilise le tri par insertion. Sa complexité théorique et pratique est similaire à celle du tri par insertion.

# Resultats

**************************************************
Tableau initial de taille 1000
**************************************************
- Tableau trié par insertion en [ 0.000000 ] secondes
- Tableau trié par insertion dichotomique en [ 0.000000 ] secondes

**************************************************
Tableau initial de taille 10000
**************************************************
- Tableau trié par insertion en [ 0.068000 ] secondes
- Tableau trié par insertion dichotomique en [ 0.000000 ] secondes

**************************************************
Tableau initial de taille 100000
**************************************************
- Tableau trié par insertion en [ 12.658000 ] secondes
- Tableau trié par insertion dichotomique en [ 0.021000 ] secondes

