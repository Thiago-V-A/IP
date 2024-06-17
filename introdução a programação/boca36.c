#include <stdio.h>

int main(){
	double x, y, z, a, tmp = 0;
	scanf ("%lf %lf %lf %lf", &x, &y, &z, &a);
	if (x > a){
		tmp = a;
		a = x;
		x = tmp;
	}
	if (x > z){
		tmp = z;
		z = x;
		x = tmp;
	}
	if (x > y){
		tmp = y;
		y = x;
		x = tmp;
	}
	if (y > a){
		tmp = y;
		y = a;
		a = tmp;
	}if (y > z){
		tmp = z;
		z = y;
		y = tmp;
	}

	printf ("%.2lf, %.2lf, %.2lf, %.2lf\n", x, y, z, a);

return 0;
}
