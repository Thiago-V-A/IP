#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define UM 100
#define DOIS 500
#define TRES 1000
#define QUATRO 5000
#define CINCO 10000
#define SEIS 50000
#define SETE 100000
#define OITO 500000


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

void ord_quick(int vet[], int x) {
	double time_spent = 0.0;
    int i, j, chave;
    clock_t begin = clock();
    for (i = 1; i < x; i++) {
       chave = vet[i];
       j = i-1;

       while (j >= 0 && vet[j] > chave) {
           vet[j+1] = vet[j];
           j = j-1;
       }
       vet[j+1] = chave;
   }
    clock_t end = clock();
	time_spent += (double)(end - begin) / CLOCKS_PER_SEC;
    printf("%f\n", time_spent);
}


int main(){
	int tamanho, um[UM], dois[DOIS], tres[TRES], quatro[QUATRO], cinco[CINCO], seis[SEIS], sete[SETE], oito[OITO];
	menu();
	scanf("%d", &tamanho);
	switch(tamanho){
		case 1: 
			vet_aleat(um, UM);
			ord_quick(um, UM);
			break;
			
		case 2: 
			vet_aleat(dois, DOIS);
			ord_quick(dois, DOIS);
			break;
			
		case 3: 
			vet_aleat(tres, TRES);
			ord_quick(tres, TRES);
			break;
			
		
		case 4:
			vet_aleat(quatro, QUATRO);
			ord_quick(quatro, QUATRO);
			break;
			
		case 5:
			vet_aleat(cinco, CINCO);
			ord_quick(cinco, CINCO);
			break;	
			
		case 6:
			vet_aleat(seis, SEIS);
			ord_quick(seis, SEIS);
			break;
			
		case 7:
			vet_aleat(sete, SETE);
			ord_quick(sete, SETE);
			break;	
			
		case 8:
			vet_aleat(oito, OITO);
			ord_quick(oito, OITO);
			break;
			
	}
	
	
	
	
	return 0;
}

