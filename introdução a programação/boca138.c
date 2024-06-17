#include <stdio.h>
#define N 1000

int main() {

  int A[N][N];
  int i,j,maior, menor, nl, nc, qtma=0, qtme=0;
  float porcma,porcme;
  scanf("%d %d",&nl,&nc);
  for(i=0;i<nl;i++) {
    for(j=0;j<nc;j++) {
      scanf("%d",&A[i][j]); //perguntar essa linha se é assim mesmo
    }
  }
    menor=999;
    maior=-99;
     for(i=0;i<nl;i++){
        for(j=0;j<nc;j++){
           if(A[i][j]<menor)
            menor=A[i][j];
           if (A[i][j]>maior)
            maior=A[i][j];
        }
     }
      for(i=0;i<nl;i++){
        for(j=0;j<nc;j++){
             if(A[i][j]==menor)
               qtme++;
             if (A[i][j]==maior)
               qtma++;
        }
      }
     porcma=(float)qtma/(nl*nc);
     porcme=(float)qtme/(nl*nc);

printf("%d %.2f%%\n",menor,porcme*100.0);
printf("%d %.2f%%\n",maior,porcma*100.0);

 return 0;


}
