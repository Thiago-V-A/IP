#include <stdio.h>

int main(){
	int x, y, i, j;
	scanf ("%d %d", &x, &y);
	for(i=2;i<=y;i++){
		for(j=1;j!=i;j++){
			printf("(%d,%d)", i, j);
			if (j+1!=i) printf ("-");
			}
		printf ("\n");
	}
	if(x>y){
		for(i=i;i<=x;i++){
			for(j=1;j<=y;j++){
				printf("(%d,%d)", i, j);
				if(j+1<=y) printf ("-");
				}
		printf ("\n");
		}
	}
	
	
	return 0;
}
