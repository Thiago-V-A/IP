#include <stdio.h>
int cont;

int fib(int n){
    cont++;
    if(n == 0 || n == 1)
        return n;
    else
        return fib(n-1) + fib(n-2);
}



int main(){
    int qtd, rep;
    scanf("%d", &qtd);
    while(qtd--){
        cont=0;
        scanf("%d", &rep);
        printf("fib(%d) = %d calls = %d\n", rep, cont-1, fib(rep));
    }
}
