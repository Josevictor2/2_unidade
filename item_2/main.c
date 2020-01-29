#include <stdio.h>
#include <stdlib.h>
#include<locale.h>
#include<string.h>
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
	imprime(t2); 
	transferirElementos(t1,t2);
	return 0;
}
