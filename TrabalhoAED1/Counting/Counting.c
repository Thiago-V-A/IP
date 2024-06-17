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

void ord_counting(int arr[], int n){
    int *arr1, *count_arr;
    arr1 = malloc(n * sizeof(int));
    count_arr = malloc(n * sizeof(int));
    for (int i = 0; i < n; ++i)
        count_arr[i] = 0;

    for (int i = 0; i < n; i++)
        count_arr[arr[i]]++;

    for (int i = 1; i <= n; i++)
        count_arr[i] += count_arr[i - 1];

    for (int i = n - 1; i >= 0; i--){
        arr1[count_arr[arr[i]] - 1] = arr[i];
        count_arr[arr[i]]--;
    }
    for (int i = 0; i < n; i++)
        arr[i] = arr1[i];
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


