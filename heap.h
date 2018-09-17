#include <stdio.h>
#include <stdlib.h>

#define MAX 100

typedef struct heap{
	int A[MAX];
	int i;
}Heap;

int minValor(Heap h); //Retorna o menor valor presente no heap, sem removê-lo. Sua complexidade deve ser O(1).
void insereValor(Heap *h, int n); //Insere um elemento no heap, mantendo as propriedades de um heap. Sua complexidade deve ser O(log n).
void criaHeap(Heap *h);//Cria um heap vazio. Sua complexidade deve ser O(1).
void imprimeHeap(Heap h); //Imprime todos os elementos do heap em largura. Sua complexidade deve ser O(n).
