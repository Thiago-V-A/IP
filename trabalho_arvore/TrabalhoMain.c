/* Tem que ser aplicado:
    --> árvores binárias de busca balanceadas
    --> algoritmos básicos de árvores binárias de busca
    --> um tipo de árvore de busca balanceada (AVL, RB, B, etc) deve ser implementados;
*/
/* 
    Integrantes: Cesar da Rocha Rodrigues, Jamilly Vitorya da Silva Barbosa, João Vitor Alves dos Reis, Raquel Dias da Silva e Thiago Vicente de Aquino.
    Título: Implementação de um Sistema de Árvore de Busca que Objetiva Procurar Produtos de Supermercado Cadastrados.
    
    Descrição: Dada a demanda de busca de produtos solicitados pelos clientes, foi pensado em uma forma mais eficiente de se fazer tal operação, de forma que fosse possivel fazer uma busca mais ágil e ordenada.
*/
#include <stdio.h>
#include <stdio.h>
#include <string.h>
#include "trabalho.c"

void Menu(){
    printf("Digite uma opcao abaixo:\n");
    printf("[0] Encerrar\n");
    printf("[1] Inserir Produto\n");
    printf("[2] Buscar Produto\n");
    printf("[3] Remover Produto\n");
    printf("[4] Apresentar Produtos em Posfixo\n");
    printf("[5] Apresentar Produtos em Infixo\n");
    printf("[5] Apresentar Produtos em Prefixo\n");
}

// FUNCAO PRINCIPAL
int main(){    
    No *raiz = NULL;
    int op, codbarras;    

    do{
        Menu();
        printf("Digite uma opção: ");
        scanf("%d", op);
        switch(op){
            case 0:
                printf("\nPrograma encerrado!\n");
                break;
            case 1:
                printf("Digite o código de barra do produto que quer inserir:");
                scanf("%d", &codbarras);
                raiz = InserirProduto(raiz, codbarras);
                break;
            case 2:
                printf("Digite o valor que quer buscar:");
                scanf("%d", &codbarras);
                BuscarProduto(raiz, codbarras);
                break;
            case 3:
                printf("Digite o produto que quer remover:");
                scanf("%d", &codbarras);
                raiz = RemoverProduto(raiz, codbarras);
                break;
            case 4:
                printf("Segue a sequência posfixa:");
                Posfixo(raiz);
                break;
            case 5:
                printf("Segue a sequência infixa:");
                Infixo(raiz);
                break;
            case 6:
                printf("Segue a sequência prefixa:");
                Prefixo(raiz);
            default:
                printf("\nEsta opção não é válida!\n");
                break;
        }    
    }while(op!=0);
    free(raiz);
    return 0;
}