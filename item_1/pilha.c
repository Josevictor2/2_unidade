#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include <stdbool.h>
#include "pilha.h"

struct pilha
{
	int dim;
	int n;
	float* vet;
	
};

int isFull(Pilha* p){
	if(p->n == p->dim){
		return true;
	} else
	{
		return false;
	}
}


Pilha* cria_pilha(){
	Pilha* p = (Pilha*) malloc(sizeof(Pilha));
	if (p == NULL) exit(1);
	p -> dim =10;
	p -> vet = (float*) malloc(p->dim*sizeof(float));
	p -> n =0;
	return p;	
}

void push(Pilha* p, float valor){
	if(!isFull(p)){
		p -> vet[p -> n] = valor;
		p->n++;
	}
}

void imprime(Pilha* p){
	int i;
	for(i = p-> n-1; i>=0; i--){
		printf("%f\n", p -> vet[i]);
	}
}

int testaMaisElementos(Pilha *p1, Pilha *p2){
		if(p1->n > p2 -> n ){
			printf("\n A pilha p1 e maior.\n");
			return true;
		} else
		{
			printf("\n A pilha p2 e maior." );
			return false;
		}
	
}
