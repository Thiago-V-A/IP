#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "cad.h"

int main(){
	int op, busca;
	Pilha* pi = cria_Pilha();
	carregar_arquivo(pi);
	struct medico med;
	
	do{ 
		menu();
		scanf("%d", &op);
		
		switch(op){
			case 1:
				cadastra_med(&med);
				insere_Pilha(pi,med);
				break;
        
			case 2: 
				if(Pilha_vazia(pi) == 1){
					printf("Nenhum médico cadastrado\n\n");
					break;
				}
				menu_busca();
				scanf("%d", &busca);
				busca_med(pi, busca);
				break;
				
			case 3:
				if(Pilha_vazia(pi) == 1){
					printf("Nenhum médico cadastrado\n\n");
					break;
				}
				remove_Pilha(pi);
				break;
        
			case 4:
				if(Pilha_vazia(pi) == 1){
					printf("Nenhum médico cadastrado\n\n");
					break;
				}
				combina_Pilha(pi);
				break;


			case 5:
				if(Pilha_vazia(pi) == 1){
					printf("Nenhum médico cadastrado\n\n");
					break;
				}
				imprime_Pilha(pi);
				break;
                
            case 6:
				printf("\nObrigador por usar nosso programa!\n");
				gerar_arquivo(pi);
                break;
		


			default: 
				printf ("\n\nFavor entrar com uma opcao valida\n\n\n");
				break;
				
		}
	}while(op!=6);
}
	
	
