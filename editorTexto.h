/*

* Ano: 2º
* Disciplina: Análise de algoritmos
* Professor : Manuel Menezes

* Sitação: A prática nos leva a perfeição, então pratique bastante!

* Este arquivo é como uma interface, apenas declaro tudo o que usarei no programa
*/

//Alterar tambem as funcoes para o tipo voidddddddd!!!!
#ifndef EDITOR_H
#define EDITOR_H

// Códigos de Erro

#define OK 		0
#define LIST_EMPTY 1
#define LINE_NOTFOUND 2
#define FALTA_VIRGULA 3
#define OCORRE_2V 4
#define COMANDO_INVALIDO 5
#define FRASE_NOTFOUND 6
#define OCORRE_1V 7
#define INVALIDS_POSSISIONS 8
#define FALTA_NUMERO 9
#define COMANDO_ERRADO 10
#define FALTA_PERCENTAGEM 11
#define NO_SPACE 12
#define NOT_FOUND_LINE 13
#define FILE_NOTFOUND 14


//verificar numeros
#define NUMBERS_OK 0
#define NUMBER_INVALID 1
#define FIRST_INVALID 2
#define SECUND_INVALID 3
#define NUMBERS_INVALIDS 4

#define TAM 80

//nao usei este enumerador
typedef enum { FALSE= 0, TRUE= 1 } Boolean;


// Tipo de Dados a ser exportados
// Estrutura de Dados
typedef struct
{
	int chave;
	char frase[TAM];
}TInfo;


typedef struct Atomo
{
	TInfo info;
	struct Atomo *eprox;
	struct Atomo *dprox;
}TAtomo;

typedef struct PAtomo
{
	TInfo info;
	Boolean remover;
	struct PAtomo * prox;
}PAtomo;

typedef struct
{
	int nElem;
	TAtomo * primeiro;
	TAtomo * ultimo;
}TLista;

typedef struct
{
	int nElem;
	PAtomo * ptopo;
}TPilha;

//declarando a variavel global para a linha corrente
int static linhaCorrente = 0;


// Funções exportadas
// Todas os metodos do programa
 
int executar ( int cod ); //mudar para int

int executarImprimir ( int cod , int nelem);  //mudar para int

int inicializarLista (TLista *lista);  //mudar para int

int inicializarPilha (TPilha *pilha);   //mudar para int

int vaziaLista (TLista lista); 

int vaziaPilha (TPilha pilha);

int empilhar(TPilha *pilha, TInfo x,Boolean op);

int inserirAtomoLinha(TLista *lista1, TLista *lista2, int chave);

int inserirAtomoFimLista(TLista *lista, TInfo x);

int imprimirLista (TLista lista, int ini, int fim);   //mudar para int

int imprimirInfo(TInfo info);   //mudar para int

TAtomo *buscarAtomo(TLista lista, int ch);

int testeBusca(TLista lista);  //mudar para int

int myAtoi(char *str);

int lerFrase(char *str);  //mudar para int

int verifOperacao(char *string1, char *string2); //falta notacao vetorial

int verifOperacaoPosicao(char * string1, char *string2,int pos); //falta notacao vetorial

int guardarNum(int ini, char car,char *str, char *str2); //falta notacao vetorial

int actualizarChave(TAtomo *paux,int qtd,int op);  //mudar para int

int actualizarAtomos(TAtomo *paux,int qtd,int op);  //mudar para int

int iniciarEditor();  

int inserirAtomosInicio(TLista *lista1, TLista *lista2);

int verificarComandos(TLista *lista,TPilha * pilha,char *frase);

int verificarNumeros(TLista *lista,TPilha * pilha,int a, int b,int n,int op);

int verifVirgula(char *string); //falta notacao vetorial

int verifDigito(char *string); //falta notacao vetorial

int verifDigitoPos(char *string); //falta notacao vetorial

int verifPercentagem(int i,char *string); 

int removerEspacos(char *str);  //mudar para int

int removerAtomoChave(TLista *lista,int chave);  //mudar para int

int removerAtomosLista(TLista *lista,int chave1,int chave2);  //mudar para int

int contarAtomosAteAtomo(TAtomo * pdel1, TAtomo * pdel2);

int localizarFrase(TLista lista, char * frase);

int alterarFrase(TLista lista, char * substring, char * frase);

int executarComandoPercentagens(TLista *lista,TPilha * pilha,char *frase);

int executarComandoDigitos(TLista *lista,TPilha * pilha,char *frase);

int tamanhoString(char * str);

int removerCaracteres(char * str, int pos,int size);  //mudar para int

int arrastarString(char * str, int pos,int size);  //mudar para int

int copiarString(char * str1,char *str2);  //mudar para int

int copiarStringCaracter(char * str1,char *str2,int pos);  //mudar para int

int converterMinuscula(char * str);  //mudar para int

int executarInvertido(int cod);  //mudar para int

int contaAntecessor(TAtomo *paux);

int imprimirListainvertido(TLista lista, int ini, int fim);

int removerFrase(TLista * lista,TPilha * pilha, char * frase);

int recuperarLinha(TLista * lista, TPilha * pilha,PAtomo * paux);

int recuperarFrase(TLista * lista, TPilha * pilha,PAtomo * paux);

int recuperar(TLista * lista, TPilha * pilha);  //mudar para int

int actualizarLista(TLista * lista);  //mudar para int

int verificarStrings(char * string1, char * string2);

#endif
