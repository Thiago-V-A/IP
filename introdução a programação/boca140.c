#include <stdio.h>
#define X 10
#define Y 320

 int main() {
   int Mat[Y][Y], logo[X][X], x, y, i, j,q,p,flag=0;
   scanf("%d",&x);
   for(i=0; i<x; i++) {
      for(j=0; j<x; j++){
         scanf("%d",&logo[i][j]);
       }
    }
 scanf("%d", &y);
  for(i=0; i<y; i++) {
      for(j=0; j<y; j++){
         scanf("%d",&Mat[i][j]);
      }
   }
   for(i=0; i<=y-x; i++){
        for(j=0; j<=y-x; j++){
            flag = 0;

            if(Mat[i][j] == logo[0][0]){
                flag = 1;
                 for(p=0; p<x; p++){
                    for(q=0; q<x; q++){

                        if(logo[p][q] != Mat[i+p][j+q]){
                            flag = 0;
                        }
                    }
                 }

                 if(flag){
                    printf("sim\n");
                    return 0;
                 }
            }
        }
     }
     printf("nao\n");
      return 0;
}
