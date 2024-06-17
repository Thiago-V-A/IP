#include <stdio.h>

int main (){
    int s, i, j, imp=1;
    scanf ("%d", &s);
    for(i=1;i<=s;i++){
        printf("%d*%d*%d = ", i, i, i);
        for(j=0;j<i-1;j++){
            printf("%d+", imp);
            imp += 2;
        }
         printf("%d\n", imp);
         imp += 2;
    }

    return 0;
}
