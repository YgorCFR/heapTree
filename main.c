#include "heap.h" 
#include "stdio.h"
#include "stdlib.h"

int main() {
	Heap h;
	criaHeap(&h);
	char op;
	int k, menor;
	do {
		scanf(" %c", &op);
		if (op == 'I') {
			scanf("%d", &k);
			insereValor(&h, k);
			
		}

		if(op == 'M'){
			menor = minValor(h);
			printf("%d", menor);
		}

		if(op == 'P'){
			imprimeHeap(h);
		}
	} while(op != 'S');
	return 0;
}