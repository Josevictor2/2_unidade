#include <stdio.h>
#include <stdlib.h>
#include<locale.h>
#include "pilha.h"

int main()
{
    Pilha *t1,*t2;
	t1 =cria_pilha();
	t2 = cria_pilha();
	setlocale(LC_ALL, "portuguese");
	push(t1,34);
	push(t1,67);
	push(t1,78);
	push(t2,34);
	push(t2,67);
	push(t2,78);
	imprime(t1);
	printf("\n");
	imprime(t2);
	printf("\n");
	iguais(t1,t2);
    return 0;
}