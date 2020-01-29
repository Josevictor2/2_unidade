#include <stdio.h>
#include <stdlib.h>
#include<locale.h>
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
		printf("%.2f\n", p -> vet[i]);
	}
}

int transferirElementos(Pilha *p1, Pilha *p2){
	int i;
	printf("\n");
	printf("Copia da primeira pilha\n");
	for(i = p1-> n-1; i>=0; i--){
		printf("%.2f\n", p2 -> vet[i] = p1 -> vet[i]);
	}
	
	return 0;
}

