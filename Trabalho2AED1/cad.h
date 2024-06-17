typedef struct medico{
	int CRM;
	char nome[30];
	int AdAtuacao;
	int Titulo;
	char tel[16];
	char email[50];
}medico;

typedef struct elemento* Pilha;

Pilha* cria_Pilha();
int consulta_topo_Pilha(Pilha* pi, struct medico *med);
int cadastra_med(medico *x);
void menu();
void menu_busca();
void combina_Pilha(Pilha* pi);
void busca_med(Pilha* pi, int busca);
int insere_Pilha(Pilha* pi, struct medico med);
int remove_Pilha(Pilha* pi);
int gerar_arquivo(Pilha* pi);
int carregar_arquivo(Pilha* pi);
int Pilha_vazia(Pilha* pi);
void imprime_Pilha(Pilha* pi);
