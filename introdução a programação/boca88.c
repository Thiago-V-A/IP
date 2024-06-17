#include <stdio.h>

void troca (int *x, int *y){
	int tmp;
	tmp=*x;
	*x=*y;
	*y=tmp;
}


void bubble(int v[], int n){
	int i,j;
	for (i=n-1; i>0; i--) {
		for (j=1; j<=i; j++) {
			if (v[j]>v[j+1]){
				troca(&v[j],&v[j+1]);	
			}
		}		
	}
}


int main() {
	int n, i, vet[1001];
	scanf("%d", &n);
	for(i=1;i<=n;i++)
		scanf ("%d", &vet[i]);
		
	bubble(vet, n);
	for(i=1;i<=n;i++)
		printf ("%d\n", vet[i]);
	return 0;
}
