#include <stdio.h>

int main(){
	int n, i, v[1000000], j, cnt[101], maior=-1;
	scanf ("%d", &n);
	for(i=0;i<n;i++)
		scanf ("%d", &v[i]);
	for(i=0;i<101;i++)
		cnt[i]=0;
	for(i=0;i<n;i++)
		cnt[v[i]]++;
	for(i=0;i<101;i++)
		if(cnt[i]>maior){
			maior=cnt[i];
			j=i;
		}
	printf ("%d\n%d\n", j, maior);
	return 0;
	
}
