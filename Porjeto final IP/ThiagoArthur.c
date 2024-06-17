/*  Prova numero 3: Controle de Médicos
    Nome: Arthur Nucada Félix de Souza  - Matricula: 202201683
    Nome: Thiago Vicente de Aquino – Matrícula: 202201716      resto da soma%4  = 3
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
int CRM;
char nome[30];
int AdAtuacao;
int Titulo;
char tel[17];
char email[25];
char end[50];
float salmen;
char datadm[11];
char datnas[11];
char tempexp[10];
}MEDICO;

typedef struct {MEDICO med[500];
                int prim, ult;
}HOSPITAL;

void inicializahospital(HOSPITAL *h){
	h->prim=0;
  h->ult=0;
}

void exibir_medico(MEDICO x) {
	printf("*  *  *  *  *  * CRM: %d *  *  *  *  *  *\n",x.CRM);
	printf("NOME: %s\n",x.nome);
	printf("TEL : %s\n",x.tel);
	printf("EMAIL: %s\n",x.email);
  if (x.AdAtuacao == 1)
    printf ("ESPECIALIDADE: Pediatra\n");
  else if (x.AdAtuacao == 2)
    printf ("ESPECIALIDADE: Ortopedista\n");
  else if (x.AdAtuacao == 3)
    printf ("ESPECIALIDADE: Dermatologista\n");
  else if (x.AdAtuacao == 4)
    printf ("ESPECIALIDADE: Cardiologista\n");
  else if (x.AdAtuacao == 5)
    printf ("ESPECIALIDADE: Oftomologista\n");
  if(x.Titulo==1)
    printf("TITULO: GRADUADO\n");
  if(x.Titulo==2)
    printf("TITULO: ESPECIALISTA\n");
  if(x.Titulo==3)
    printf("TITULO: MESTRE\n");
  if(x.Titulo==4)
    printf("TITULO: DOUTOR\n");
  if(x.Titulo==5)
    printf("TITULO: POS-DOUTOR\n");
	printf("-------------------------------------------\n");
}

void menu(){
	printf ("*  *  *  *  *  *  * M E N U *  *  *  *  *  *  *\n");
	printf ("1- Cadastrar medico\n");
	printf ("2- Alterar dados do medico\n");
	printf ("3- Buscar medico pelo CRM\n");
	printf ("4- Exibir todos os medicos de uma area de atuacao\n");
	printf ("5- Exibir medicos com determinada titulacao\n");
	printf ("6- Exibir todos os medicos\n");
	printf ("7- Encerrar programa\n");
	printf ("Entre com a opcao desejada:\n");
}

void cadastra_med(MEDICO *x){
  printf("Entre com o CRM\n");
  scanf("%d", &(x->CRM));
  getchar();
  printf("Entre com o nome\n");
  fgets(x->nome,30, stdin);
  printf("Escolha a area de atuacao:\n");
  printf("1- Pediatria\n");
  printf("2- Ortopedia\n");
  printf("3- Dermatologia\n");
  printf("4- Cardiologia\n");
  printf("5- Oftomologia\n");
  scanf("%d", &(x->AdAtuacao));
  getchar();
  printf("Qual a titulacao maxima:\n");
  printf("1- Graduado\n");
  printf("2- Especialista\n");
  printf("3- Mestrado\n");
  printf("4- Doutorado\n");
  printf("5- Pos-doutorado\n");
  scanf("%d", &(x->Titulo));
  getchar();
  printf("Digite o telefone:\n");
  fgets(x->tel,17, stdin);
  printf("Digite o email:\n");
  fgets(x->email,25, stdin);
  printf("Digite o endereco:\n");
  fgets(x->end,50, stdin);
  printf("Entre com o salario:\n");
  scanf("%f", &(x->salmen));
  getchar();
  printf("Entre com a data de admissao:\n");
  fgets(x->datadm,11, stdin);
  printf("Entre com a data de nascimento:\n");
  fgets(x->datnas,11, stdin);
  printf("Entre com o tempo de experiencia:\n");
  fgets(x->tempexp,10, stdin);
}

void inserir_medico(HOSPITAL *h, MEDICO m ){
  if (h->ult==500)
    printf ("Nao ha mais vagas para medicos\n");
  else {
    h->med[h->ult] = m;
    h->ult++;
  }
}


void excluir_med(HOSPITAL *h, MEDICO *m){
  int i;
  i=0;
  while ((i<h->ult)&&(m->CRM!=h->med[i].CRM))
    i++;
  if (i==h->ult)
    printf ("CRM nao encontrado!\n");
  else {
    *m = h->med[i];
	   h->med[i] = h->med[h->ult-1];
	   h->ult--;
}
}

void busca_crm(HOSPITAL a, MEDICO x) {
	int i=0;
	while((i<a.ult)&&(x.CRM!=a.med[i].CRM))
	   i++;
	if(i==a.ult)
	  printf("Medico com CRM = %d nao esta cadastrado\n", x.CRM);
	else { printf("O medico consultada sera exibida a seguir\n");
		   exibir_medico(a.med[i]);
		 }
}



void pesq_ad(MEDICO x, HOSPITAL z){
  int i=0;
  	while(i<=z.ult){
		if(x.AdAtuacao==z.med[i].AdAtuacao)
			exibir_medico(z.med[i]);
		i++;
	}
}

void pesq_titulo(MEDICO x, HOSPITAL z){
  int i;
  for(i=0;i<z.ult;i++)
    if(x.Titulo==z.med[i].Titulo)
      exibir_medico(z.med[i]);
}

void exibir_tudo(HOSPITAL x){
	int i;
	if(x.ult==0)
	  printf("Não existem medicos cadastrados\n");
	 else {  printf("--------------- TODOS OS MEDICOS -------------------\n");
		     for(i=0; i<x.ult; i++)
		       exibir_medico(x.med[i]);
	         printf("---------------------------------------------------\n");
	}
}



int main (){
	int op;
  MEDICO M;
  HOSPITAL H;
  inicializahospital(&H);
	do{
  	menu();
  	scanf("%d", &op);
    switch(op){
      case 1:
        cadastra_med(&M);
		inserir_medico(&H, M);
        break;

      case 2:
        printf("Digite o CRM que deseje alterar:\n");
        scanf("%d", &M.CRM);
        getchar();
        busca_crm(H, M);
        excluir_med(&H, &M);
        printf ("Favor recadastrar o medico\n");
        cadastra_med(&M);
        inserir_medico(&H, M);
        break;

      case 3:
        printf("Digite o CRM que deseje buscar:\n");
        scanf("%d", &M.CRM);
        getchar();
        busca_crm(H, M);
        break;

      case 4:
        printf("Qual espcialidade deseja buscar:\n");
        printf("1- Pediatria\n");
  			printf("2- Ortopedia\n");
  			printf("3- Dermatologia\n");
  			printf("4- Cardiologia\n");
  			printf("5- Oftomologia\n");
        scanf("%d", &M.AdAtuacao);
        pesq_ad(M, H);
        break;

     case 5:  printf("Qual titulacao deseja buscar:\n");
              printf("1- Graduado\n");
              printf("2- Especialista\n");
              printf("3- Mestrado\n");
              printf("4- Doutorado\n");
              printf("5- Pos-doutorado\n");
        			scanf("%d", &M.Titulo);
              pesq_titulo(M, H);
              break;

     case 6:
		exibir_tudo(H);
		break;

     default: printf ("Favor entrar com uma opcao valida\n");
              break;

    }

  }while(op!=7);

	return 0;
}
