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

void vet_aleat(int* vet, int x){
    int i;
    for(i = 0; i < x; i++){
        vet[i] = rand() % x;
    }
}

void ord_quick(int* vet, int esq, int dir) {
    int i = esq, j = dir, temp, pivo = vet[(esq + dir) / 2];
    while (i <= j) {
        while (vet[i] < pivo)
            i++;
        while (vet[j] > pivo)
            j--;
        if (i <= j) {
            temp = vet[i];
            vet[i] = vet[j];
            vet[j] = temp;
            i++;
            j--;
        }
    }
    if (esq < j)
        ord_quick(vet, esq, j);
    if (i < dir)
        ord_quick(vet, i, dir);
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
            ord_quick(vet, 0, 99);
            end = clock();
            time_spent += (double)(end - begin) / CLOCKS_PER_SEC;
            printf("%f\n", time_spent);
            free(vet);
            break;
        case 2:
            vet = malloc(1000 * sizeof(int));
            vet_aleat(vet, 1000);
            begin = clock();
            ord_quick(vet, 0, 999);
            end = clock();
            time_spent += (double)(end - begin) / CLOCKS_PER_SEC;
            printf("%f\n", time_spent);
            free(vet);
            break;
        case 3:
            vet = malloc(10000 * sizeof(int));
            vet_aleat(vet, 10000);
            begin = clock();
            ord_quick(vet, 0, 9999);
            end = clock();
            time_spent += (double)(end - begin) / CLOCKS_PER_SEC;
            printf("%f\n", time_spent);
            free(vet);
            break;
        case 4:
            vet = malloc(100000 * sizeof(int));
            vet_aleat(vet, 100000);
            begin = clock();
            ord_quick(vet, 0, 99999);
            end = clock();
            time_spent += (double)(end - begin) / CLOCKS_PER_SEC;
            printf("%f\n", time_spent);
            free(vet);
            break;
        case 5:
            vet = malloc(1000000 * sizeof(int));
            vet_aleat(vet, 1000000);
            begin = clock();
            ord_quick(vet, 0, 999999);
            end = clock();
            time_spent += (double)(end - begin) / CLOCKS_PER_SEC;
            printf("%f\n", time_spent);
            free(vet);
            break;
        case 6:
            vet = malloc(10000000 * sizeof(int));
            vet_aleat(vet, 10000000);
            begin = clock();
            ord_quick(vet, 0, 9999999);
            end = clock();
            time_spent += (double)(end - begin) / CLOCKS_PER_SEC;
            printf("%f\n", time_spent);
            free(vet);
            break;
        case 7:
            vet = malloc(100000000 * sizeof(int));
            vet_aleat(vet, 100000000);
            begin = clock();
            ord_quick(vet, 0, 99999999);
            end = clock();
            time_spent += (double)(end - begin) / CLOCKS_PER_SEC;
            printf("%f\n", time_spent);
            free(vet);
            break;
        case 8:
            vet = malloc(500000000 * sizeof(int));
            vet_aleat(vet, 500000000);
            begin = clock();
            ord_quick(vet, 0, 99999999);
            end = clock();
            time_spent += (double)(end - begin) / CLOCKS_PER_SEC;
            printf("%f\n", time_spent);
            free(vet);
            break;
    }
}





