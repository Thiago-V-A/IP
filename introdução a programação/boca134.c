#include <stdio.h>
#define N 500

int main() {
  int A[N][N], n, i, j, tr, At[N][N], R[N][N];

  scanf("%d", &n);
  for(i=0; i<n; i++) {
	  for(j=0; j<n; j++) {
		  scanf("%d",&A[i][j]);
		 }
	}

	for(i=0;i<n;i++) {
	  for(j=0; j<n; j++) {
		  At[i][j] = A[j][i];
		 }
	}
	tr = 0;
	for(i=0; i<n; i++){
	  tr = tr + A[i][i];
	 }
	for(i=0; i<n; i++) {
	  for(j=0; j<n; j++) {
		  A[i][j] = tr*A[i][j];
		}
	}
	for(i=0; i<n; i++) {
	  for(j=0; j<n; j++) {
		  R[i][j] = A[i][j] + At[i][j];
	  }
	}
	for(i=0;i<n;i++) {
	  for(j=0;j<n-1;j++) {
		  printf("%d ",R[i][j]);
	  }
	  printf("%d\n",R[i][j]);
	 }

return 0;
}
