#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "cad.h"

struct elemento{
    struct medico dados;
    struct elemento *prox;
};
typedef struct elemento Elem;

//CRIA PILHA
Pilha* cria_Pilha(){
    Pilha* pi = (Pilha*) malloc(sizeof(Pilha));
    if(pi != NULL)
        *pi = NULL;
    return pi;
}

//CADASTRO MED
int cadastra_med(medico *x){
	printf("\nEntre com o CRM\n");
	scanf("%d", &(x->CRM));
	getchar();
	printf("\nEntre com o nome\n");
	fgets(x->nome,30, stdin);
	printf("\nEscolha a area de atuacao:\n");
	printf("1- Pediatria\n");
	printf("2- Ortopedia\n");
	printf("3- Dermatologia\n");
	printf("4- Cardiologia\n");
	printf("5- Oftomologia\n");
	scanf("%d", &(x->AdAtuacao));
	getchar();
	printf("\nDigite o telefone:\n");
	fgets(x->tel,16, stdin);
	printf("\nDigite o email:\n");
	fgets(x->email,50, stdin);
	printf("\nQual a titulacao maxima:\n");
	printf("1- Graduado\n");
	printf("2- Especialista\n");
	printf("3- Mestrado\n");
	printf("4- Doutorado\n");
	printf("5- Pos-doutorado\n");
	scanf("%d", &(x->Titulo));
	getchar();
}

//IMPRIME O MEDICO SELECIONADO
void imprime_medico(medico dados){
	printf("----------------- CRM: %d -----------------\n",dados.CRM);
	printf("NOME: %s\n",dados.nome);
	printf("TEL : %s\n",dados.tel);
	printf("EMAIL: %s\n",dados.email);
	if (dados.AdAtuacao == 1)
		printf ("ESPECIALIDADE: Pediatra\n");
	else if (dados.AdAtuacao == 2)
		printf ("ESPECIALIDADE: Ortopedista\n");
	else if (dados.AdAtuacao == 3)
		printf ("ESPECIALIDADE: DermatologistA\n");
	else if (dados.AdAtuacao == 4)
		printf ("ESPECIALIDADE: Cardiologista\n");
	else if (dados.AdAtuacao == 5)
		printf ("ESPECIALIDADE: Oftomologista\n");
	if(dados.Titulo==1)
		printf("\nTITULO: GRADUADO\n");
	if(dados.Titulo==2)
		printf("\nTITULO: ESPECIALISTA\n");
	if(dados.Titulo==3)
		printf("\nTITULO: MESTRE\n");
	if(dados.Titulo==4)
		printf("\nTITULO: DOUTOR\n");
	if(dados.Titulo==5)
		printf("\nTITULO: POS-DOUTOR\n");		
	printf("-------------------------------------------\n");
}

//INSERE MEDICO
int insere_Pilha(Pilha* pi, struct medico med){
    if(pi == NULL)
        return 0;
    Elem* no;
    no = (Elem*) malloc(sizeof(Elem));
    if(no == NULL)
        return 0;
    no->dados = med;
    no->prox = (*pi);
    *pi = no;
    return 1;
}

//BUSCA
void busca_med(Pilha* pi, int caso){

	Elem* no = *pi;
		
	int CRM;
	char nome[30];
	int AdAtuacao;
	int Titulo;
	char tel[16];
	char email[50];
	int cont = 0;

	if(caso == 1){
		printf("\n\nDigite o CRM\n");
		scanf("%d", &CRM);
		while(no != NULL){
			if(no->dados.CRM == CRM){
				imprime_medico(no->dados);
				cont++;
			}
			no = no->prox;
		}
	}
	
	if(caso == 2){
		printf("\n\nDigite o nome\n");
		getchar();
		fgets(nome,30, stdin);
		while(no != NULL){
			if(strcmp(no->dados.nome, nome) == 0){
				imprime_medico(no->dados);
				cont++;
			}
			no = no->prox;
		}
	}
	
	if(caso == 3){
		printf("\n\nDigite a área de atuação:\n");
		printf("1- Pediatria\n");
  		printf("2- Ortopedia\n");
  		printf("3- Dermatologia\n");
  		printf("4- Cardiologia\n");
  		printf("5- Oftomologia\n");
		scanf("%d", &AdAtuacao);
		while(no != NULL){
			if(no->dados.AdAtuacao == AdAtuacao){
				imprime_medico(no->dados);
				cont++;
			}
			no = no->prox;
		}
	}
	
	if(caso == 4){
		printf("\n\nDigite o titulo:\n");
		printf("1- Graduado\n");
        printf("2- Especialista\n");
        printf("3- Mestrado\n");
        printf("4- Doutorado\n");
        printf("5- Pos-doutorado\n");
		scanf("%d", &Titulo);
		while(no != NULL){
			if(no->dados.Titulo == Titulo){
				imprime_medico(no->dados);
				cont++;
			}
			no = no->prox;
		}
	}
	
	if(caso == 5){
		printf("\n\nDigite o telefone\n");
		getchar();
		fgets(tel,16, stdin);
		while(no != NULL){
			if(strcmp(no->dados.tel, tel) == 0){
				imprime_medico(no->dados);
				cont++;
			}
			no = no->prox;
		}
	}
	
	if(caso == 6){
		printf("\n\nDigite o email\n");
		getchar();
		fgets(email,50, stdin);
		while(no != NULL){
			if(strcmp(no->dados.email, email) == 0){
				imprime_medico(no->dados);
				cont++;
			}
			no = no->prox;
		}
	}
	if(cont==0)
		printf("\nNenhum cadastro encontrado\n");

}

//REMOVE UM CERTO ELEMENTO DA PILHA
int remove_Pilha(Pilha* pi){
	int CRM, cont = 0;
	Elem *no = *pi;
	Elem *anterior = NULL;
	printf("\n\nDigite o CRM do cadastro que deseja exlcuir\n");
	scanf("%d", &CRM);
	while(no != NULL){
		if(no->dados.CRM == CRM){
			imprime_medico(no->dados);
			cont++;
			break;
			}
		anterior = no;
		no = no->prox;
		}
	if (cont == 0)
		printf("\nCRM não encontrado!\n");
	else {
        if (anterior == NULL) {
            *pi = no->prox;
        } else {
            anterior->prox = no->prox;
        }
        free(no);
        printf("\nCadastro removido com sucesso!\n");
    }
}

//COMBINA DOIS CADASTROS EM UM
void combina_Pilha(Pilha* pi){
	int CRM, umoudois;
	Elem *no = *pi;
	Elem *anterior = NULL;
	printf("\n\nDigite o primeiro CRM\n");
	scanf("%d", &CRM);
	while(no != NULL){
		if(no->dados.CRM == CRM){
			imprime_medico(no->dados);
			break;
			}
		anterior = no;
		no = no->prox;
		}
	
		
	Elem *no1 = *pi;
	Elem *anterior1 = NULL;
	printf("\n\nDigite o segundo CRM\n");
	scanf("%d", &CRM);
	while(no1 != NULL){
		if(no1->dados.CRM == CRM){
			imprime_medico(no1->dados);
			break;
			}
		anterior1 = no1;
		no1 = no1->prox;
		}
	printf("\n Qual dos dados sera mantido? 1 ou 2?\n");
	scanf("%d", &umoudois);
	if(umoudois == 1){
		if (anterior1 == NULL) {
            *pi = no1->prox;
        } else {
            anterior1->prox = no1->prox;
        }
        free(no1);
	}
	if(umoudois == 2){
		if (anterior == NULL) {
            *pi = no->prox;
        } else {
            anterior->prox = no->prox;
        }
        free(no);
	}
	
}

//CHECA SE A PILHA ESTÁ VAZIA
int Pilha_vazia(Pilha* pi){
    if(pi == NULL)
        return 1;
    if(*pi == NULL)
        return 1;
    return 0;
}

//IMPRIME TODOS OS CADASTROS
void imprime_Pilha(Pilha* pi){
    if(pi == NULL)
        return;
    Elem* no = *pi;
    while(no != NULL){
		imprime_medico(no->dados);
        no = no->prox;
    }
}

//MENU DO PROGRAMA
void menu(){
	printf ("\n*  *  *  *  *  *  * M E N U *  *  *  *  *  *  *\n");
	printf ("1- Cadastrar medico\n");
	printf ("2- Realizar busca por médicos\n");
	printf ("3- Remoção de um cadastro\n");
	printf ("4- Combinar dois cadastros em um só\n");
	printf ("5- Exibir todos os médicos\n");
	printf ("6- Sair do programa\n");
	printf ("\nEntre com a opcao desejada:\n");
}

//PEQUENO MENU PARA SELECIONAR O TIPO DE DADO A SER PESQUISADO
void menu_busca(){
	printf ("\n\n*  *  *  *  *  *  * PELO QUE DESEJA BUSCAR? *  *  *  *  *  *  *\n\n");
	printf ("1 - Buscar por CRM\n");
	printf ("2 - Buscar por nome\n");
	printf ("3 - Buscar por área de atuação\n");
	printf ("4 - Buscar por titulção\n");
	printf ("5 - Buscar por telefone\n");
	printf ("6 - Buscar por email\n");
}

//CARREGAR ARQUIVOS
int carregar_arquivo(Pilha* pi) {
    FILE *arq;
    arq = fopen("cad.bin", "rb");
    if (arq == NULL) {
        return 0;
    }
    struct medico med;
    while (fread(&med, sizeof(struct medico), 1, arq) == 1) {
        insere_Pilha(pi, med);
    }
    fclose(arq);
    return 1;
}

//GERAR NOVOS ARQUIVOS
int gerar_arquivo(Pilha* pi) {
    FILE *arq;
    arq = fopen("cad.bin", "wb");
    if (arq == NULL) {
        return 0;
    }
    Elem* aux = *pi;
    while (aux != NULL) {
        fwrite(&(aux->dados), sizeof(struct medico), 1, arq);
        aux = aux->prox;
    }
    fclose(arq);
    return 1;
}




