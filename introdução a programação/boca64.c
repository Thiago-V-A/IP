#include <stdio.h>

int main(){
	int x, y, z, div=2, mmc=1;
	scanf ("%d %d %d", &x, &y, &z);
	do{
		if(x%div==0 || y%div==0 || z%div==0){
		printf ("%d %d %d :%d\n", x, y, z, div);
		if(x%div==0)
			x=x/div;
		if(y%div==0)
			y=y/div;
		if(z%div==0)
			z=z/div;
		mmc=mmc*div;
		}else
			div=div+1;
	}while(x!=1 || y!=1 || z!=1);
	
	
	printf ("MMC: %d\n", mmc);
	
}
