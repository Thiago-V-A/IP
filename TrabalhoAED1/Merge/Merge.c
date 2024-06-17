#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void menu(){
	printf("Qual o tamanho do vetor que deseja ordenar?\n");
	printf("1 - 100\n");
	printf("2 - 1.000\n");
	printf("3 - 10.000\n");
	printf("4 - 100.000\n");
	printf("5 - 1.000.000\n");
	printf("6 - 10.000.000\n");
	printf("7 - 100.000.000\n");
	printf("8 - 500.000.000\n");
}

void vet_aleat(int vet[], int x){
	int i;
	for(i = 0; i < x; i++){
			vet[i] = rand() % x;
	}
}

void ord_merge(int *v, int n) {
  int *c = malloc(sizeof(int) * n);
  sort(v, c, 0, n - 1);
  free(c);
}

void sort(int *v, int *c, int i, int f) {
  if (i >= f) return;

  int m = (i + f) / 2;

  sort(v, c, i, m);
  sort(v, c, m + 1, f);
  if (v[m] <= v[m + 1]) return;

  merge(v, c, i, m, f);
}

void merge(int *v, int *c, int i, int m, int f) {
  int z,
      iv = i, ic = m + 1;

  for (z = i; z <= f; z++) c[z] = v[z];

  z = i;

  while (iv <= m && ic <= f) {
    if (c[iv] <= c[ic]) v[z++] = c[iv++];
    else v[z++] = c[ic++];
  }

  while (iv <= m) v[z++] = c[iv++];

  while (ic <= f) v[z++] = c[ic++];
}


int main(){
	int tamanho, i;
	menu();
	clock_t begin, end;
	double time_spent = 0.0;
	scanf("%d", &tamanho);
	int* vet;
	switch(tamanho){
		case 1:
		    vet = malloc(100 * sizeof(int));
			vet_aleat(vet, 100);
			begin = clock();
			ord_merge(vet, 100);
			end = clock();
            time_spent += (double)(end - begin) / CLOCKS_PER_SEC;
            printf("%f\n", time_spent);
            free(vet);
			break;

		case 2:
			vet = malloc(1000 * sizeof(int));
			vet_aleat(vet, 1000);
			begin = clock();
			ord_merge(vet, 1000);
			end = clock();
            time_spent += (double)(end - begin) / CLOCKS_PER_SEC;
            printf("%f\n", time_spent);
            free(vet);
			break;

		case 3:
			vet = malloc(10000 * sizeof(int));
			vet_aleat(vet, 10000);
			begin = clock();
			ord_merge(vet, 10000);
			end = clock();
            time_spent += (double)(end - begin) / CLOCKS_PER_SEC;
            printf("%f\n", time_spent);
            free(vet);
			break;


		case 4:
			vet = malloc(100000 * sizeof(int));
			vet_aleat(vet, 100000);
			begin = clock();
			ord_merge(vet, 100000);
			end = clock();
            time_spent += (double)(end - begin) / CLOCKS_PER_SEC;
            printf("%f\n", time_spent);
            free(vet);
			break;

		case 5:
			vet = malloc(1000000 * sizeof(int));
			vet_aleat(vet, 1000000);
			begin = clock();
			ord_merge(vet, 1000000);
			end = clock();
            time_spent += (double)(end - begin) / CLOCKS_PER_SEC;
            printf("%f\n", time_spent);
            free(vet);
			break;

		case 6:
			vet = malloc(10000000 * sizeof(int));
			vet_aleat(vet, 10000000);
			begin = clock();
			ord_merge(vet, 10000000);
			end = clock();
            time_spent += (double)(end - begin) / CLOCKS_PER_SEC;
            printf("%f\n", time_spent);
            free(vet);
			break;

		case 7:
			vet = malloc(100000000 * sizeof(int));
			vet_aleat(vet, 100000000);
			begin = clock();
			ord_merge(vet, 100000000);
			end = clock();
            time_spent += (double)(end - begin) / CLOCKS_PER_SEC;
            printf("%f\n", time_spent);
            free(vet);
			break;

		case 8:
			vet = malloc(500000000 * sizeof(int));
			vet_aleat(vet, 500000000);
			begin = clock();
			ord_merge(vet, 500000000);
			end = clock();
            time_spent += (double)(end - begin) / CLOCKS_PER_SEC;
            printf("%f\n", time_spent);
            free(vet);
			break;
	}




	return 0;
}

