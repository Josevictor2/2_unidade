#ifndef TESTE_H_INCLUDED
#define TESTE_H_INCLUDED


typedef struct pilha Pilha;
int isEmpty (Pilha* p);
int isFull(Pilha* p);
Pilha* cria_pilha();
void push(Pilha* p, float valor);
float pop(Pilha* p);
void imprime(Pilha* p);
int inverter(Pilha *p);



#endif // TESTE_H_INCLUDED