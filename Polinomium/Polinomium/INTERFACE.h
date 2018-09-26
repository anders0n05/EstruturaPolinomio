#ifndef INTERFACE_H
#define INTERFACE_H
#include "LISTA_ESTATICA.h"
#include <iostream>
using namespace std;
void recebePolinimio() {
	int c, c1, c2, d, d1, d2, grau;
	
	
	cout << "digite os dados do primeiro polinomio: \n";


	cin >> c >> c1 >> c2;
	cout << "digite os dados do segundo polinomio: \n";
	cin >> d >> d1 >> d2;
	Polinomio a, b;
	ListaEst poli1, poli2;
	inicializarL_EST(poli1);
	inicializarL_EST(poli2);
	a.coeficiente = c, a.referencia = c1, a.expoente = c2;
	inserirInicioL_EST(poli1, a);
	b.coeficiente = d; b.referencia = d1, b.expoente = d2;
	inserirFimL_EST(poli2, b);
	imprimirL_EST(poli1);
	imprimirL_EST(poli2);
	
}

#endif // !INTERFACE_H


