#include <stdio.h>

int main (){
	float vl, x, y, i, l, mvl=0, ml=0;
	int n, mn=0;
	scanf ("%f %f %f", &vl, &x, &y);
	if (x<y){
	for (i=x;i<=y;i++){
		if (i<vl)
			n = 120 + ((vl-i)/0.5)*25;
		else
			n = 120 - ((i-vl)/0.5)*30;
		l = n*i - 200 - n*0.05;
		if (l>ml){
			ml = l;
			mvl = i;
			mn = n;
		}
		printf ("V: %.2f, N: %d, L: %.2f\n", i, n, l);
	}
		printf ("Melhor valor final: %.2f\nLucro: %.2f\nNumero de ingressos: %d\n", mvl, ml, mn);
		
		
	}else
		printf ("INTERVALO INVALIDO.\n");
	return 0;
}
