#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void menu(){
	printf("Qual o tamanho do vetor que deseja ordenar?\n");
	printf("1 - 100\n");
	printf("2 - 500\n");
	printf("3 - 1.000\n");
	printf("4 - 5.000\n");
	printf("5 - 10.000\n");
	printf("6 - 50.000\n");
	printf("7 - 100.000\n");
	printf("8 - 500.000\n");
}

void vet_aleat(int vet[], int x){
	int i;
	for(i = 0; i < x; i++){
			vet[i] = rand() % x;
	}
}

void ord_insertion(int vet[], int x) {
    int i, j, chave;
    for (i = 1; i < x; i++) {
       chave = vet[i];
       j = i-1;

       while (j >= 0 && vet[j] > chave) {
           vet[j+1] = vet[j];
           j = j-1;
       }
       vet[j+1] = chave;
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
			ord_insertion(vet, 100);
			end = clock();
            time_spent += (double)(end - begin) / CLOCKS_PER_SEC;
            printf("%f\n", time_spent);
            free(vet);
			break;

		case 2:
			vet = malloc(500 * sizeof(int));
			vet_aleat(vet, 500);
			begin = clock();
			ord_insertion(vet, 500);
			end = clock();
            time_spent += (double)(end - begin) / CLOCKS_PER_SEC;
            printf("%f\n", time_spent);
            free(vet);
			break;

		case 3:
			vet = malloc(1000 * sizeof(int));
			vet_aleat(vet, 1000);
			begin = clock();
			ord_insertion(vet, 1000);
			end = clock();
            time_spent += (double)(end - begin) / CLOCKS_PER_SEC;
            printf("%f\n", time_spent);
            free(vet);
			break;


		case 4:
			vet = malloc(5000 * sizeof(int));
			vet_aleat(vet, 5000);
			begin = clock();
			ord_insertion(vet, 5000);
			end = clock();
            time_spent += (double)(end - begin) / CLOCKS_PER_SEC;
            printf("%f\n", time_spent);
            free(vet);
			break;

		case 5:
			vet = malloc(10000 * sizeof(int));
			vet_aleat(vet, 10000);
			begin = clock();
			ord_insertion(vet, 10000);
			end = clock();
            time_spent += (double)(end - begin) / CLOCKS_PER_SEC;
            printf("%f\n", time_spent);
            free(vet);
			break;

		case 6:
			vet = malloc(50000 * sizeof(int));
			vet_aleat(vet, 50000);
			begin = clock();
			ord_insertion(vet, 50000);
			end = clock();
            time_spent += (double)(end - begin) / CLOCKS_PER_SEC;
            printf("%f\n", time_spent);
            free(vet);
			break;

		case 7:
			vet = malloc(100000 * sizeof(int));
			vet_aleat(vet, 100000);
			begin = clock();
			ord_insertion(vet, 100000);
			end = clock();
            time_spent += (double)(end - begin) / CLOCKS_PER_SEC;
            printf("%f\n", time_spent);
            free(vet);
			break;

		case 8:
			vet = malloc(500000 * sizeof(int));
			vet_aleat(vet, 500000);
			begin = clock();
			ord_insertion(vet, 500000);
			end = clock();
            time_spent += (double)(end - begin) / CLOCKS_PER_SEC;
            printf("%f\n", time_spent);
            free(vet);
			break;
	}




	return 0;
}

