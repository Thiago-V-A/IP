#include <stdio.h>

int main() {
	int n, i, j, k, v[1000], mnr=99999, vMnr[1000], vQd[1000], vet[1000], dif=99999;
	scanf ("%d", &n);
	for(i=0;i<n;i++){
		mnr=99999;
		scanf ("%d", &v[i]);
		vQd[i]=v[i]*v[i];
		for(k=0;k<v[i];k++)
			scanf ("%d", &vet[k]);
		for(j=0;j<v[i]-1;j++){
		    for(k=j+1;k<v[i];k++){
		        dif=vet[j]-vet[k];
		        if(dif<0) dif = -dif;
		        if(mnr>dif){
		        mnr=dif;
		        vMnr[i]=mnr;
		        }
		    }
	    }
	}
	for(i=0;i<n;i++)
		printf ("%d %d\n", vMnr[i], vQd[i]);
	
return 0;	
}
