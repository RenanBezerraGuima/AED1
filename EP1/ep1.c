#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

// elemento da lista
typedef struct estr
{
	int chave;
	struct estr *prox;
} NO;

// funcao principal
void removerCompartilhados(NO **p1, NO **p2);

//------------------------------------------
// O EP consiste em implementar esta funcao
// e outras funcoes auxiliares que esta
// necessitar
//------------------------------------------
void removerCompartilhados(NO **p1, NO **p2)
{

	// seu codigo AQUI

	return;
}

// por favor nao inclua nenhum codigo a ser entregue abaixo deste ponto

//----------------------------------------------------------------
// use main() apenas para fazer chamadas de teste ao seu programa
//----------------------------------------------------------------
int main()
{

	NO *p1 = NULL;
	NO *p2 = NULL;

	// aqui vc pode incluir codigo para inserir elementos
	// de teste nas listas p1 e p2

	// o EP sera testado com chamadas deste tipo
	removerCompartilhados(&p1, &p2);
}
