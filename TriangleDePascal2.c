#include <stdio.h>

int main()
{
unsigned int N,n,k,p=1;
printf("Entrer l'entier positif n dans le développement de (a+b)^n:");
scanf("%d",&N);
printf("\n"); //Pour séparer l'affichage de départ a celle suivant
printf("Le triangle de PASCAL a %d lignes est ☺️:\n",N);
if(N>0)
{
for(n=0; n<=N; n++)
{
    for(k=0; k<=n; k++)
    {
        if(k==0) //On affiche 1 pour la première colonne
        {
            p=1;
            printf("%d",p);
        }
        else
        {
            p=p*(n-k+1)/k; //C'est une manière de calculer la combinaison
            printf("%5d",p);// %5d permet un espacement de 5
        }
    }
    printf("\n");
}
}
printf("\n\n"); //Pour une affichage claire dans le terminal
}
