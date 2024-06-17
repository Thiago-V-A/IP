#include <stdio.h>

int main (){
    int s, i, tt=0;
    scanf ("%d", &s);
    printf("%d =", s);
    for(i=1;i<=s/2;i++){
        if(s%i==0){
            printf(" %d ", i);
            tt += i;
            if(i!=s/2) printf ("+");
        }
    }
    getchar ();
    printf("= %d ", tt);
    if(tt==s)
        printf("(NUMERO PERFEITO)\n");
    else
        printf("(NUMERO NAO E PERFEITO)\n");

    return 0;
}

