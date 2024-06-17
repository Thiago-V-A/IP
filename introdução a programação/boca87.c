#include <stdio.h>

int main(){
	int n, i, j=1, V[1001], C[1001], maior=-99999, menor=99999;
	scanf ("%d", &n);
	for(i=1;i<=n;i++){
		scanf ("%d", &V[i]);
		if(V[i] > maior)
			maior = V[i];
		if(V[i] < menor)
			menor = V[i];
	}
	j=1;
	for(i=n;i>=1;i--){
		C[j] = V[i];
		j++;
	}
	for(i=1;i<n;i++)
		printf ("%d ", V[i]);
	printf ("%d\n", V[i]);
	for(i=1;i<n;i++)
		printf ("%d ", C[i]);
	printf ("%d\n", C[i]);
	
	printf ("%d\n", maior);
	printf ("%d\n", menor);
	
	
	
	return 0;
}
