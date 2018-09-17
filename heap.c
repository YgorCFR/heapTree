#include "heap.h"

//VALOR MÍNIMO, OU SEJA ELEMENTO COM ÍNDICE 1 NO MIN-HEAP
int minValor(Heap h){
	int minimo = h.A[1];
	return minimo;
}
//INSERÇÃO
void insereValor(Heap *h, int n){
	h->i++;                      //<- AQUI INCREMENTA O ÍNDICE POIS FOI CRIADO UM HEAP VAZIO E O PRIMEIRO ELEMENTO DEVE TER ÍNDICE 1
	int j, pai;                  //<- DECLARAÇÃO DAS VARIÁVEIS J PARA O INDICE E PAI PARA O PAI DO ELEMENTO n
	j = h->i;                    //<- J = ÍNDICE DO ELEMENTO
	h->A[j] = n;                 //<- O ESPAÇO VAZIO DO VETOR SERÁ OCUPADO POR n
	pai = (j)/2;                 //<- DE ACORDO COM A REGRA PARA UM ELEMENTO DE ÍNDICE i , PAI = i/2
	while(pai>=1 && j>1){        
		if(h->A[j] < h->A[pai]){ //<-SE O ELEMENTO FOR MENOR QUE O PAI, ELES SE TROCAM
			int temp = h->A[j];
			h->A[j] = h->A[pai];
			h->A[pai] = temp;
		}
		j = pai;                 //<-J = J/2 (PAI);
		pai = (j)/2;             //<-PAI = (J/2)/2;
	}
	
}
//CRIAR HEAP, SENDO ELE VAZIO
void criaHeap( Heap *h){
	h->i = 0;                    //ÍNDICE OU TAMANHO ATUAL E REAL DO HEAP = 0
	h->A[h->i];
	return;
}
//FUNÇÃO DE IMPRIMIR TODOS OS ELEMENTOS EM UM LOOP FOR, TAL COMO UM VETOR NORMAL.
void imprimeHeap(Heap h){
	for(int j =1; j<=h.i; j++){  
		printf("%d ", h.A[j]);
	}
}
 