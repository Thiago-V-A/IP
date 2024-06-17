#include <stdio.h>

int main(){
	int x, n, i = 0, m;
	scanf ("%d", &x);
	m = x;
	if (x < 100000){
	while (x > 0){
        n = x%10;
        i = i*10 + n;
        x /= 10;
	}
	if (i == m)
        printf ("PALINDROMO\n");
        else
            printf ("NAO PALINDROMO\n");
	}else
        printf ("NUMERO INVALIDO\n");
return(0);
}
