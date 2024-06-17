#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
	int i, funcionarios, clientes, t = 0;


	scanf("%d", &funcionarios);
	int a[funcionarios], temp[funcionarios];
	scanf("%d", &clientes);
	int b[clientes];

	for(i = 0; i < funcionarios; i++){
		scanf("%d", &a[i]);
	}

	for(i = 0; i < clientes; i++){
		scanf("%d", &b[i]);
	}

	while(t < clientes){
		if(t < funcionarios){
			temp[t] = b[t] * a[t];
			t++;
		}else{
			int index = temp[0];
			int z = 0;
			for(i = 0; i < funcionarios; i++)
				if(index > temp[i]){
					index = temp[i];
					z = i;
				}

			temp[z] += b[t] * a[z];

			z = 0;
			t++;
		}


	}
	int index = temp[0];

	for(i = 0; i < funcionarios; i++)
		if(index < temp[i])
			index = temp[i];
        printf("%d\n", index);
}
