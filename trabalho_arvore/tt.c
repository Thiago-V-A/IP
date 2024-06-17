#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct produto{
    int codigo;
    float preco;
    int estoque;
    char nome[100];
}produto;

typedef struct noarv{
    produto p;
    struct noarv* direita;
    struct noarv* esquerda;
}noarv;

void menu(){ 
      printf("1 - Cadastrar novo produto\n");
      printf("2 - Remove produto\n");
      printf("3 - Buscar produto na arvore\n");
      printf("4 - Mostrar todos os produtos\n");
      printf("7 - Sair\n");
      printf("Entre com a opcao desejada: \n");
}

noarv* criarNo(produto Produto){
    noarv* novoNo = (noarv*)malloc(sizeof(noarv));
    novoNo->p = Produto;
    novoNo->esquerda = NULL;
    novoNo->direita = NULL;
    return novoNo;
}

noarv* inserirProduto(noarv* raiz, produto Produto) {
    if (raiz == NULL)
        return criarNo(Produto);

    if (Produto.codigo < raiz->p.codigo)
		raiz->esquerda = inserirProduto(raiz->esquerda, Produto);
		
    else if (Produto.codigo > raiz->p.codigo)
		raiz->direita = inserirProduto(raiz->direita, Produto);
    
    return raiz;
}

void exibirProdutos(noarv* raiz){
    if (raiz != NULL) {
        exibirProdutos(raiz->esquerda);
        printf("Codigo: %d\n", raiz->p.codigo);
        printf("Nome: %s", raiz->p.nome);
        printf("Preco: %.2f\n", raiz->p.preco);
        printf("Quantidade: %d\n", raiz->p.estoque);
        printf("--------------------\n");
        exibirProdutos(raiz->direita);
    }
}

















 

 
int main(){
	char nome[100];
	int codigo, op, estoque;
	float preco;
    noarv* arvore = NULL;
    do{  
        menu();
        scanf("%d",&op);
        switch (op) {
        case 1:
            printf("Insira o codigo do produto:\n");
            scanf("%d", &codigo);
            printf("Insira a quantidade do produto a ser adicionada:\n");
            scanf("%d", &estoque);
            getchar();
            printf("Insira o nome do produto:\n");
			fgets(nome, 100, stdin);
            printf("Insira o preco do produto a ser cadastrado:\n");
            scanf("%f", &preco);
            
            produto novoProduto;
            novoProduto.codigo = codigo;
            strcpy(novoProduto.nome, nome);
            novoProduto.preco = preco;
            novoProduto.estoque = estoque;
            
            arvore = inserirProduto(arvore, novoProduto);
            
            break;

        case 2: 
            break;
            
        case 3: 
            break;

		case 4:
			printf("Aqui estao os produtos cadastrados:\n");
			printf("--------------------\n");
			exibirProdutos(arvore);
			break;
		
        case 7: 
            printf("\nObrigado por usar nosso programa\n");
            break;
            
        default:
            printf("\nVoce digitou uma opcao invalida, por favor, escolha uma das opcoes:\n");
            break;  
        }
        
        
    }while (op!=7);
    return 0;
}
