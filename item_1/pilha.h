#ifndef TESTE_H_INCLUDED
#define TESTE_H_INCLUDED


typedef struct pilha Pilha;

int testaMaisElementos(Pilha *p1, Pilha *p2);
int isFull(Pilha* p);
Pilha* cria_pilha();
void push(Pilha* p, float valor);
void imprime(Pilha* p);
int iguais(Pilha *p1, Pilha *p2);

#endif // TESTE_H_INCLUDED