#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "pilha.h"

int main()
{
     Pilha *t1;
	 Pilha *t2;
	t1 =cria_pilha();
	t2 = cria_pilha();
	
	push(t1,34);
	push(t1,67);
	push(t1,78);
	imprime(t1);
	printf("\n");
	push(t2,67);
	push(t2, 59);
	push(t2, 59);
	push(t2, 59);
	imprime(t2); 
	testaMaisElementos(t1,t2);
	
	return 0;
}