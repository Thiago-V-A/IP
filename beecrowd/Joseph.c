#include <stdio.h>

int escolhe(int n, int k){
    if(n == 1)
        return 1;
    else
        return (escolhe(n - 1, k) + k - 1)% n + 1;
}


int main(){
    int nc, n, k, num=1;
    scanf("%d", &nc);
    while(nc--){
        scanf("%d %d", &n, &k);
        printf("Case %d: %d\n", num, escolhe(n, k));
        num++;
    }


}
