#include <stdio.h>
#include <math.h>

int main(){
	double x, n, fat, div=1, res=0;
	int i, j;
	scanf ("%lf %lf", &x, &n);
	for(j=0;j<=n;j++){
		fat = j*2+1;
			for(i=1;i<=fat;i++)
				div = div*i;
		res = res + (pow(-1,j)*pow(x,fat))/div;
		div=1;
	}
	printf("seno(%.2lf) = %.6lf\n", x, res);
	return 0;
}
