# Pascal_triangle

Le premier code (code 1) permet de construire le triangle de Pascal à l'aide des matrices (tableaux en C) car le principe est plus simple et compréhensible dans un
tableau ce qui nous pousse à utiliser un tableau dans la proposition d’un programme pour résoudre ce problème, il nous suffit d’appliquer le principe dans un
tableau vu que le tableau a déjà ses lignes et colonnes. Ainsi le fait de d’écrire 1 sur les première et dernières colonne revient à initialiser celles-ci à un (1)
dans le programme et le reste se fait par addition comme expliquer précédemment.  Donc si on veut le triangle de pascal pour un entier N saisi dans le développement
de On va utiliser des variables entière i et j correspondant respectivement aux lignes et colonnes de notre tableau de dimension 2 qu’on appellera Tab[N][N] (N est
la taille maximale des lignes et colonnes), 
pour i allant de 1 à N et j allant de 1 à i-1 alors Tab[i][j] = Tab[i-1][j-1] + Tab[i-1][j] sachant que à l’initialisation Tab[i][0]=1 et Tab[i][i]=1 

Le code (code2) permet de construire le triangle de Pascal avec la formule de la combinaison avec la formule p=p*(n-k+1)/k avec p le coefficient précédent, n le 
dégrée de l'operation et k la position actuelle
