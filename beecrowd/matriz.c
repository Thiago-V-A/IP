#include <stdio.h>

int main(){
    int c, i, j;
    char t;
    float M[12][12], sm=0;
    scanf("%d", &c);
    scanf(" %c", &t);
    for(i=0;i<12;i++)
        for(j=0;j<12;j++)
            scanf("%f", &M[i][j]);
    for(i=0;i<12;i++)
        sm=sm+M[i][c];
    if(t=='M')
        sm=sm/12;
    printf("%.1f\n", sm);



    return 0;
}
