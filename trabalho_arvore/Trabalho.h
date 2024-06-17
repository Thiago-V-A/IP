// ESTRUTURA DO NO
typedef struct no{
    int Codigo, altura_direita, altura_esquerda; // aqui será guardado o produto, o valor da altura da esquerda e da direita, que mais tarde será usada no balanceamento.
    //int produto; // garantia caso não use o codigo como variavel para o cod de barras
    struct no *esquerda; // aponta para a direita
    struct no *direita; // aponta para a esquerda
}No;


// FUNÇÕES NECESSÁRIAS
No *InserirProduto(No*arvore, int c); // Inserção de produtos na árvore de forma balanceada 
No *RemoverProduto(No*arvore, int c); // Remorção do produto da árvore
void BuscarProduto(No*arvore, int c); // Buscar os produtos na arvore
void Posfixo(No*arvore); // Apresenta a sequência na ordem posfixa
void Infixo(No*arvore); // Apresenta a sequência na ordem infixa
void Prefixo(No*arvore); // Apresenta a sequência na ordem prefixa
//void altura(No*arvore);


// FUNÇÕES PARA O BALANCEAMENTO FB(FATOR DE BALANCEAMENTO FB = ALT_ESQ - ALT_DIR)
No *RotacionarEsquerda();
No *RotacionarDireita();
No *Balancemento();
No *AtualizarAltura();
No *remover_arvore();

// OUTRAS FUNÇÕES
void Menu();