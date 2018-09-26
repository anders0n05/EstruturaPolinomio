#ifndef INTERFACE_H
#define INTERFACE_H
#include "LISTA_ESTATICA.h"
#include <iostream>
using namespace std;
void recebePolinimio() {
	int c, c2, d, d2;
	char c1, d1;
	
	cout << "digite os dados do primeiro polinomio: \n";

	cout << "Coeficiente a" << endl;
	cin >> c;
	cout << "Coenficiente b" << endl;
	cin >> c1;
	cout << "Coeficiente c" << endl;
	cin>> c2;
	cout << "digite os dados do segundo polinomio: \n";
	cout << "Coeficiente a" << endl;
	cin >> d;
	cout << "Coenficiente b" << endl;
	cin >> d1;
	cout << "Coeficiente c" << endl;
	cin >> d2;
	
	Polinomio a, b;
	ListaEst poli1, poli2;
	inicializarL_EST(poli1);
	inicializarL_EST(poli2);
	a.coeficiente = c, a.referencia = c1, a.expoente = c2;
	inserirInicioL_EST(poli1, a);
	b.coeficiente = d; b.referencia = d1, b.expoente = d2;
	inserirFimL_EST(poli2, b);
	cout << "Polinomio Inseridos" << endl;
	imprimirL_EST(poli1);
	imprimirL_EST(poli2);
	cout << "Escolha um opcao" << endl;
	cout << endl << endl;
	cout << "====================================================";
	cout << "||												   ||";
	cout << "||             1 - Somar Polinomio				   ||";
	cout << "||             2 - Diminuir Polinomio			   ||";
	cout << "||             3 - Multiplicar Polinomio		   ||";
	cout << "||             4 - Dividir Polinomio			   ||";
	cout << "====================================================";
	cout << endl << endl;
	int opcao;
	cin >> opcao;
	imprimirL_EST(poli1);
	imprimirL_EST(poli2);
	
}

#endif // !INTERFACE_H


