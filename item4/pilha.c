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

int iguais(Pilha *p1, Pilha *p2){

		int dado = 0, dado2 = 0;
		if (p1 -> n == p2 -> n){
			dado = p1 -> n;
	   		while (!isEmpty(p1) && !isEmpty(p2)){
  	   			if(pop(p1) == pop(p2)){
  	   		  	  dado2++;		 
				 }
		   }
		   if (dado == dado2){
			   printf("As pilhas são iguais!!!");
		   } else
		   {
			   printf("As pilhas são diferentes!!!");
		   }
		}else
		{
			printf("As pilhas são diferentes!!!");
		}
		return 0;
	}