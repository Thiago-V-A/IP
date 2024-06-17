#include <stdio.h>

void troca (int *x, int* y){
	int aux;
	aux=*x;
	*x=*y;
	*y=aux;
}
void bubble(int v[], int n){
	int  i,j;
	for (i=n-1; i>0; i--) {
		for (j=0; j<i; j++) {
			if (v[j]>v[j+1]) {
				troca(&v[j], &v[j+1]);
			}
		}
	}
}

int main(){
    int w;
    scanf("%d", &w);
    while(w>0){




    }


    return 0;
}
