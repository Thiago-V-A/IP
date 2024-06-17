#include <stdio.h>
#define N 1000000

void troca (int *x, int *y){
	int aux;
	aux=*x;
	*x=*y;
	*y=aux;
}
void bubble(int v[], int n){
	int  i,j;
	for (i=1; i<n; i++) {
		for (j=0; j<n-i; j++) {
			if (v[j]>v[j+1]) {
				troca(&v[j], &v[j+1]);
			}
		}
	}
}



int main() {
  int n, v[N], i;
  float media;
  scanf("%d",&n);
  for(i = 0; i<n; i++)
    scanf("%d", &v[i]);
    
  bubble(v, n);
  if(n%2==0)
    { media = (float)(v[n/2]+v[(n/2)-1])/2.0;
      printf("%.2f\n",media);
     }else { media = v[n/2];
             printf("%.2f\n",media);
             }

return 0;
}
