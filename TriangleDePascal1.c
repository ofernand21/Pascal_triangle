#include<stdio.h>

int main()
{
    int i,j,n;// n=-1 nous permet de rentrer dans la boucle while
    do
    {
       printf("Entrer l'entier positif n dans le developpement de (a+b)^n:");
       scanf("%d",&n);
    }
    while(n<0);
    int T[n+1][n+1];// tableau de dimension 2 
    T[0][0]=1;
    for(i=1; i<=n; i++)
    {
         T[i][0]=1;
         T[i][i]=1;
         for(j=1; j<i; j++)
         {
           T[i][j]=T[i-1][j-1]+T[i-1][j];
         }
    }
    for(i=0; i<=n; i++)
    {
      for(j=0; j<=i; j++)
      {
        printf("%5d\t",T[i][j]);
      }
      printf("\n");
    }
}
