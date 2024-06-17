#include <stdio.h>
#define MAX 100

int main() {
   int M[MAX][MAX], n, i, j, soma;

   scanf("%d",&n);
   for(i=0;i<=n;i++)
     for(j=0;j<=n;j++)
        scanf("%d",&M[i][j]);

   for(i=0;i<n;i++) {soma = 0;
     for(j=0;j<n;j++) {
        soma = M[i][j] + M[i][j+1] + M[i+1][j] + M[i+1][j+1];
        if(soma>1)
          printf("S");
         else printf("U");
        }
       printf("\n");
      }
 return 0;
}
