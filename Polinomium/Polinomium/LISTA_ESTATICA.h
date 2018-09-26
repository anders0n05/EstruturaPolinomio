#ifndef LISTA_ESTATICA_H_INCLUDED
#define LISTA_ESTATICA_H_INCLUDED
#include <iostream>
using namespace std;

struct Polinomio {
	int coeficiente;
	int expoente;
	char referencia;

};

const int MAX = 2;
struct ListaEst {
	Polinomio elementos[MAX];
	int qtd;
};

void inicializarL_EST(ListaEst &l) {
	l.qtd = 0;
}
bool inserirFimL_EST(ListaEst &l, Polinomio c) {
	if (l.qtd == MAX) { return false; }
	l.elementos[l.qtd] = c;
	l.qtd++;
	return true;
}

bool inserirInicioL_EST(ListaEst &l, Polinomio c) {

	if (l.qtd == MAX) { return false; }
	for (int i = l.qtd; i > 0; i--) {
		l.elementos[i] = l.elementos[i - 1];
	}
	l.elementos[0] = c;
	l.qtd++;
	return true;
}

bool inserirPosicaoL_EST(ListaEst &l, Polinomio c, int pos) {
	if (l.qtd == MAX || pos < 0 || pos > l.qtd) { return false; }
	for (int i = l.qtd; i > pos; i--) {
		l.elementos[i] = l.elementos[i - 1];
	}
	l.elementos[pos] = c;
	l.qtd++;
	return true;
}

bool removerFimL_EST(ListaEst &l) {
	if (l.qtd > 0) {
		l.qtd--;
		return true;
	}
	else { return false; }
}

bool removerInicioL_EST(ListaEst &l) {
	if (l.qtd == 0) { return false; }
	for (int i = 0; i < l.qtd - 1; i++) {
		l.elementos[i] = l.elementos[i + 1];
	}
	l.qtd--;
	return true;
}
bool removePosicaoL_EST(ListaEst &l, int pos) {
	for (int i = pos; i < l.qtd - 1; i++) {
		l.elementos[i] = l.elementos[i + 1];
	}
	l.qtd--;
	return true;
}

void imprimirL_EST(ListaEst &l) {
	for (int i = 0; i < l.qtd; i++) {

		cout << l.elementos[i].coeficiente << "-" << l.elementos[i].referencia << "-" << l.elementos[i].expoente << "\n";
	}
}
//falta fazer operacoes com os polinomios
#endif // LISTA_ESTATICA_H_INCLUDED