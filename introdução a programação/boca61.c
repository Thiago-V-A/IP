#include <stdio.h>

int main(){
	int t, x, y, i, xn, yn;
	scanf ("%d", &t);
	for (i=0;i<t;i++){
		scanf ("%d %d", &x, &y);
		xn = x%10;
		x /= 10;
		xn = xn*10 + x%10;
		x /= 10;
		xn = xn*10 + x;
		yn = y%10;
		y /= 10;
		yn = yn*10 + y%10;
		y /= 10;
		yn = yn*10 + y;
		if(xn>yn)
			printf ("%d\n",xn);
		else
			printf ("%d\n",yn);
	}
		
	
	return 0;
}
