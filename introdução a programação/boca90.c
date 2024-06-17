#include <stdio.h>
#define N 1000000

void troca (int *x, int *y){
	int tmp;
	tmp = *x;
	*x = *y;
	*y = tmp;
}

void bubble(int v[], int n){
	int i, j;
	for(i=1;i<n;i++){
		for(j=0;j<n-1;j++){
			if(v[j] > v[j+1]){
				troca(&v[j], &v[j+1]);
			}
		}
	}
}

int main(){
	int n, v[N], i;
	float med;
	scanf ("%d", &n);
	for (i=0;i<n;i++)
		scanf ("%d", &v[i]);
	bubble(v, n);
	if(n%2==0){
		med = (float)(v[n/2]+v[(n/2)+1])/2;
		printf ("%.2f\n", med);
		}else{
			med =  v[n/2];
			printf ("%.2f\n", med);
	}
	return 0;
}
