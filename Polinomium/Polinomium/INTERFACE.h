#ifndef INTERFACE_H
#define INTERFACE_H
#include "FUNCIONAL.h"
#include <iostream>
#include"OPERACOES_MATEMATICAS_POLINIMIOS.h"

//=================================================================================

using namespace std;
void imprimirL_EST(ListaEst &l) {// imprime os polinomios
	Polinomio *ultimo = l.inicio;
	while (ultimo!= NULL) { //percorre ate nao ser nulo
		if (ultimo->P.coeficiente == 0) {
			cout << " ";
		}
		else {
			cout << "[ " << ultimo->P.coeficiente << ultimo->P.referencia << "^" << ultimo->P.expoente << "]";
			
		}
		ultimo = ultimo->proximo;
	}
}
void recebePolinimio() {
	int base1, expoente1, base2, expoente2;
	char variavel1, variavel2;
	ElementoPolinomio a, b;
	ListaEst poli1, poli2;
	inicializarL_EST(poli1);
	inicializarL_EST(poli2);
	cout << "Digite os dados do primeiro polinomio: \n";
	cout << "Qual o grau do Polinomio:" << endl;
	int grau;
	cin >> grau;
	for (int i = 0; i <= grau; i++)
	{
		cout << "Base a" << endl;
		cin >> base1;
		cout << "Variavel" << endl;
		cin >> variavel1;
		expoente1 = grau - i;
		a.coeficiente = base1;
		a.expoente = expoente1;
		a.referencia = variavel1;
		inserirFimL_EST(poli1, a);
		poli1.qtd++;
	}
	cout << "Digite os dados do Segundo polinomio: \n";
	cout << "Qual o grau do segundo Polinomio:" << endl;
	int grau2;
	cin >> grau2;
	cout << endl;
	for (int i = 0; i <= grau2; i++)
	{
		cout << "Base a" << endl;
		cin >> base2;
		cout << "Variavel" << endl;
		cin >> variavel2;
		expoente2 = grau2 - i;
		b.coeficiente = base2;
		b.expoente = expoente2;
		b.referencia = variavel2;
		inserirFimL_EST(poli2, b);
		poli2.qtd++;
	}
	cout << "Polinomio Inseridos" << endl;
	imprimirL_EST(poli1);
	cout << endl;
	imprimirL_EST(poli2);
	cout << "Escolha um opcao" << endl;
	cout << endl << endl;
	cout << "===================================================="<<endl;
	cout << "||												   ||"<<endl;
	cout << "||             1 - Somar Polinomio				   ||"<<endl;
	cout << "||             2 - Diminuir Polinomio			   ||"<<endl;
	cout << "||             3 - Multiplicar Polinomio		   ||"<<endl;
	cout << "||             4 - Dividir Polinomio			   ||"<<endl;
	cout << "===================================================="<<endl;
	cout << endl << endl;
	int opcao;
	cin >> opcao;
	imprimirL_EST(poli1);
	imprimirL_EST(poli2);
	
}

#endif // !INTERFACE_H


