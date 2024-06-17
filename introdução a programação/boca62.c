#include <stdio.h>

int main() {
	int l, i, j, k;
	scanf ("%d", &l);
	for(i=5;i<=l;i++){
		for(j=3;j<=l;j++)
			for(k=j;k<=l;k++)
				if(i*i == (j*j)+(k*k))
					printf ("hipotenusa = %d, catetos %d e %d\n", i, j, k);
		
	}
	
	
	return 0;
}
