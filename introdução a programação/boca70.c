#include <stdio.h>

int main (){
    double n;
    int i, comp, cont=1;
    scanf("%lf", &n);
    comp=n;
    while(comp!=n){
        n*=10;
        comp=n;
        cont*=10;
    }
    if(comp>cont)
        for(i=2;i<=comp/2;i++){
            if(comp%i==0 && cont%i==0){
                cont=cont/i;
                comp=comp/i;
                i=2;
            }
        }
    else
        for(i=2;i<=cont/2;i++){
            if(comp%i==0 && cont%i==0){
                cont=cont/i;
                comp=comp/i;
                i=2;
            }
        }

    printf("%d/%d\n", comp, cont);



    return 0;
}
