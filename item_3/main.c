#include <stdio.h>
#include <stdlib.h>
#include<locale.h>
#include "pilha.h"

int main()
{
    Pilha *t1;
	t1 =cria_pilha();
	
	push(t1,34);
	push(t1,67);
	push(t1,78);
	imprime(t1);
	inverter(t1);
	
	return 0;
}