
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

void ord_counting(int *vet, int n) {
	int i, exp = 1, m = 0;
	int *bucket, *temp;
	bucket = malloc(n * sizeof(int));
    temp = malloc(n * sizeof(int));

	for(i = 0; i < n; i++) {
		if(vet[i] > m) {
			m = vet[i];
		}
	}

	while((m/exp) > 0) {
		for (i = 0; i < n; i++) {
			bucket[i] = 0;
		}
		for(i = 0; i < n; i++) {
			bucket[(vet[i] / exp) % 10]++;
		}
		for(i = 1; i < n; i++) {
			bucket[i] += bucket[i-1];
		}
		for(i = (n - 1); i >= 0; i--) {
			temp[--bucket[(vet[i] / exp) % 10]] = vet[i];
		}
		for(i = 0; i < n; i++) {
			vet[i] = temp[i];
		}
		exp *= 10;
	}
}



int main(){
	int tamanho;
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
			ord_counting(vet, 100);
			end = clock();
            time_spent += (double)(end - begin) / CLOCKS_PER_SEC;
            printf("%f\n", time_spent);
            free(vet);
			break;

		case 2:
			vet = malloc(1000 * sizeof(int));
			vet_aleat(vet, 1000);
			begin = clock();
			ord_counting(vet, 1000);
			end = clock();
            time_spent += (double)(end - begin) / CLOCKS_PER_SEC;
            printf("%f\n", time_spent);
            free(vet);
			break;

		case 3:
			vet = malloc(10000 * sizeof(int));
			vet_aleat(vet, 10000);
			begin = clock();
			ord_counting(vet, 10000);
			end = clock();
            time_spent += (double)(end - begin) / CLOCKS_PER_SEC;
            printf("%f\n", time_spent);
            free(vet);
			break;


		case 4:
			vet = malloc(100000 * sizeof(int));
			vet_aleat(vet, 100000);
			begin = clock();
			ord_counting(vet, 100000);
			end = clock();
            time_spent += (double)(end - begin) / CLOCKS_PER_SEC;
            printf("%f\n", time_spent);
            free(vet);
			break;

		case 5:
			vet = malloc(1000000 * sizeof(int));
			vet_aleat(vet, 1000000);
			begin = clock();
			ord_counting(vet, 1000000);
			end = clock();
            time_spent += (double)(end - begin) / CLOCKS_PER_SEC;
            printf("%f\n", time_spent);
            free(vet);
			break;

		case 6:
			vet = malloc(10000000 * sizeof(int));
			vet_aleat(vet, 10000000);
			begin = clock();
			ord_counting(vet, 10000000);
			end = clock();
            time_spent += (double)(end - begin) / CLOCKS_PER_SEC;
            printf("%f\n", time_spent);
            free(vet);
			break;

		case 7:
			vet = malloc(100000000 * sizeof(int));
			vet_aleat(vet, 100000000);
			begin = clock();
			ord_counting(vet, 100000000);
			end = clock();
            time_spent += (double)(end - begin) / CLOCKS_PER_SEC;
            printf("%f\n", time_spent);
            free(vet);
			break;

		case 8:
			vet = malloc(500000000 * sizeof(int));
			vet_aleat(vet, 500000000);
			begin = clock();
			ord_counting(vet, 500000000);
			end = clock();
            time_spent += (double)(end - begin) / CLOCKS_PER_SEC;
            printf("%f\n", time_spent);
            free(vet);
			break;
	}




	return 0;
}


