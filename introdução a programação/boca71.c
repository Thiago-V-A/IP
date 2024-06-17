#include <stdio.h>

int main(){
    int ct, men=220, i, som1, som2;
    scanf("%d", &ct);
    while(ct>0){
        som1=0;
        som2=0;
        for(i=1;i<=men/2;i++){
            if(men%i==0)
                som1+=i;
        }
        for(i=1;i<=som1/2;i++){
            if(som1%i==0)
                som2+=i;
        }
        if(som2==men && men<som1){
            printf("(%d,%d)\n", men, som1);
            ct--;
        }
        men++;
    }


    return 0;
}
