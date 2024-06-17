#include <stdio.h>

int cal(int f){
    unsigned long int res=1, i;
    for(i=f;i>0;i--)
        res=res*i;

}


int main(){
    int fat, res;
    scanf("%d", &fat);
    if(fat==0)
        res=1;
    else
        res = cal(fat);
    printf("%d! = %d\n", fat, res);

    return 0;
}
