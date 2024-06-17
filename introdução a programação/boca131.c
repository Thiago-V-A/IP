
#include <stdio.h>
#define MAX 6

int main() {
   int A[MAX][MAX], i, j, soma, maior = -9999;
   for(i=0;i<MAX; i++)
      for(j=0;j<MAX;j++)
         scanf("%d",&A[i][j]);

   for(i=0;i<MAX-2; i++) {
	   soma =0;
      for(j=0;j<MAX-2;j++) {
		  soma = A[i][j] + A[i][j+1] +A[i][j+2] + A[i+1][j+1] + A[i+2][j] + A[i+2][j+1] + A[i+2][j+2];
		  if(maior < soma)
		     maior = soma;
	  }
	 }
	 printf("%d\n",maior);

return 0;
}
