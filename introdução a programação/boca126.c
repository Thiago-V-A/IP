
#include <stdio.h>
#define M 1000

int main(){
    int t, i, j, mat[M][M];
    scanf("%d", &t);
    for(i=0;i<t;i++)
        for(j=0;j<t;j++)
            scanf("%d", &mat[i][j]);
     for(i=0;i<t;i++)
        for(j=0;j<t;j++)
            if(i==j)
                printf("%d\n", mat[i][j]);

    return 0;
}
