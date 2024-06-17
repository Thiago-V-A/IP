#include <stdio.h>
#define N 1000


int main() {
  int M[N][N], W[N][N], nl, nc, i, j, wl,wc;
  scanf("%d", &nl);
  scanf("%d",&nc);
  for(i=0;i<nl;i++){
     for(j=0; j<nc; j++) {
        scanf("%d",&M[i][j]);
      }
  }
  i = 0;
  for(j=1;j<=nc;j++){
     W[i][j] = M[nl-1][j-1];
   }
  i = nl+1;
  for(j=1;j<=nc;j++){
     W[i][j] = M[0][j-1];
   }
   j = 0;
   for(i=1;i<=nl;i++){
     W[i][j] = M[i-1][nc-1];
    }
   j = nc+1;
    for(i=1;i<=nl;i++){
     W[i][j] = M[i-1][0];
    }
    for(i=1;i<=nl;i++){
     for(j=1; j<=nc; j++) {
        W[i][j] = M[i-1][j-1];
      }
  }

  wl = -1;
  for(i=1; i<nl+1; i++) {
    for(j=1; j<nc+1; j++) {
       if((W[i][j]==1111)&&(W[i-1][j]==4)&&(W[i+1][j]==8)&&(W[i][j-1]==0)&&(W[i][j+1]==0)){
            wl = i-1;
            wc = j-1;
        }
     }
  }
  if(wl!=-1)
       printf("%d %d",wl,wc);
  else printf("WALLY NAO ESTA NA MATRIZ");
return 0;
}
