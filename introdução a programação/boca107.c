#include <stdio.h>
#define M 200

int fun(int *v, int tm){
    int i;
    for(i=1;i<=tm;i++)
        if(v[i]==i)
            break;
    return i;
}

int main(){
    int i, cont=1, res, tm=1, v[M];
    while(tm!=0){
        scanf("%d", &tm);
        if(tm==0) break;
        for(i=1;i<=tm;i++)
            scanf("%d", &v[i]);
        printf("Teste %d\n", cont);
        res = fun(v, tm);
        printf("%d\n", res);
        cont++;
        printf("\n");
    }

    return 0;
}
