#ifndef FUNCIONAL_H_INCLUDED
#define FUNCIONAL_H_INCLUDED

#include <iostream>
using namespace std;

struct ElementoPolinomio { 
	int coeficiente;
	int expoente;
	char referencia;

};

struct Polinomio {//Contem o conjunto de elementos do Polinomio
	ElementoPolinomio P;
	Polinomio *proximo;
};



struct ListaEst {
	Polinomio *inicio;

	int qtd;
};

void inicializarL_EST(ListaEst &l) {
	l.inicio = NULL;
	l.qtd = 0;
}


bool inserirInicioL_EST(ListaEst &l, ElementoPolinomio P) {
	Polinomio *novo = new Polinomio;
	if (l.qtd != 0) { return false; }
	novo->P = P;
	novo->proximo = l.inicio;
	l.inicio = novo;

	return true;
}

bool inserirFimL_EST(ListaEst &l, ElementoPolinomio P) {
	Polinomio *novo = new Polinomio;

	if (l.inicio == NULL) { 
		
		inserirInicioL_EST(l, P);
		return false;
	}
	novo->P = P;
	novo->proximo = NULL;
	Polinomio *ultimo = l.inicio;
	while (ultimo->proximo != NULL) {
		ultimo = ultimo->proximo;
	}
	ultimo->proximo = novo;

	return true;
}

//bool inserirPosicaoL_EST(ListaEst &l, Polinomio c, int pos) {
//	if (l.qtd == MAX || pos < 0 || pos > l.qtd) { return false; }
//	for (int i = l.qtd; i > pos; i--) {
//		l.elementos[i] = l.elementos[i - 1];
//	}
//	l.elementos[pos] = c;
//	l.qtd++;
//	return true;
//}
//
//bool removerFimL_EST(ListaEst &l) {
//	if (l.qtd > 0) {
//		l.qtd--;
//		return true;
//	}
//	else { return false; }
//}
//
//bool removerInicioL_EST(ListaEst &l) {
//	if (l.qtd == 0) { return false; }
//	for (int i = 0; i < l.qtd - 1; i++) {
//		l.elementos[i] = l.elementos[i + 1];
//	}
//	l.qtd--;
//	return true;
//}
//bool removePosicaoL_EST(ListaEst &l, int pos) {
//	for (int i = pos; i < l.qtd - 1; i++) {
//		l.elementos[i] = l.elementos[i + 1];
//	}
//	l.qtd--;
//	return true;
//}


#endif // LISTA_ESTATICA_H_INCLUDED