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

int isEmpty (Pilha* p){
	if (p-> n == 0){
		return true;
	}else
	{
		return false;
	}
}
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

float pop(Pilha* p){
	float v;
	if(!isEmpty(p)){
	   v = p-> vet[p->n-1];
	   p->n--;
	   return v; 	
	}
	return -1;
}
void imprime(Pilha* p){
	int i;
	for(i = p-> n-1; i>=0; i--){
		printf("%f\n", p -> vet[i]);
	}
}

int inverter(Pilha *p){
		
		Pilha *aux = cria_pilha();
		int dado;
	   	while (!isEmpty(p)){
  	   		 dado = pop(p);
  	   		 push(aux, dado);
		   }
		   printf("\n");
		   printf("Pilha invertida\n");
		   printf("\n");
		   imprime(aux);
		   return 0;
	}
	
	


