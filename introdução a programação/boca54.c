#include <stdio.h>

int main(){
    int n, i, p=0;
    scanf ("%d", &n);
    if (n>1){
        for(i=(n/2);i>1;i--)
            if (n%i == 0){
                printf ("NAO PRIMO\n");
                p++;
                break;
            }
        if (p == 0)
            printf ("PRIMO\n");
    }else
        printf ("Numero invalido!\n");
    return 0;
}
