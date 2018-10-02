#ifndef OPERACOES_MATEMATICAS_POLINIMIOS
#define OPERACOES_MATEMATICAS_POLINIMIOS
#include "FUNCIONAL.H"
#include <iostream>
using namespace std;
/*operacoes com polinomio esta dando errado, preciso percorrer os dois polinomios e ir comparando, do jeito que ta só ta comparando uma vez*/

ListaEst operacoes(ListaEst &a, ListaEst &b, int opcao,int grau) {
	ElementoPolinomio temp;//elementos temporarios para realizar operacoes
	
	ListaEst poliresultante;
	
	inicializarL_EST(poliresultante);
	
	
	for (int  i = 0; i <= grau; i++)
	{
		switch (opcao) {
			case 1:
				if (a.inicio->P.expoente == b.inicio->P.expoente && a.inicio->P.referencia == b.inicio->P.referencia) {
					temp.coeficiente = a.inicio->P.coeficiente + b.inicio->P.coeficiente;
					temp.expoente = a.inicio->P.expoente;
					temp.referencia = a.inicio->P.referencia;
					inserirFimL_EST(poliresultante, temp);
					if (a.inicio->proximo != NULL) { // Atualizando o ponteiro para fazer operacoess
						a.inicio = a.inicio->proximo;
						b.inicio = b.inicio->proximo;
					}
				}
				else {//se polinomios nao forem iguais apenas ordena um do lado do outro
					temp.coeficiente = a.inicio->P.coeficiente;
					temp.expoente = a.inicio->P.expoente;
					temp.referencia = a.inicio->P.referencia;
					inserirFimL_EST(poliresultante, temp);
					if (a.inicio->proximo != NULL) { // Atualizando o ponteiro para fazer operacoess
						a.inicio = a.inicio->proximo;
					}
					temp.coeficiente = b.inicio->P.coeficiente;
					temp.expoente = b.inicio->P.expoente;
					temp.referencia = b.inicio->P.referencia;
					inserirFimL_EST(poliresultante, temp);
					if (b.inicio->proximo != NULL) { // Atualizando o ponteiro para fazer operacoess
						b.inicio = b.inicio->proximo;
					}
				}
				break;
			  case 2://diminuir
				  if (a.inicio->P.expoente == b.inicio->P.expoente && a.inicio->P.referencia == b.inicio->P.referencia) {
					  temp.coeficiente = a.inicio->P.coeficiente - b.inicio->P.coeficiente;
					  temp.expoente = a.inicio->P.expoente;
					  temp.referencia = a.inicio->P.referencia;
					  inserirFimL_EST(poliresultante, temp);
					  if (a.inicio->proximo != NULL) { // Atualizando o ponteiro para fazer operacoess
						  a.inicio = a.inicio->proximo;
						  b.inicio = b.inicio->proximo;
					  }
				  }
				  else {//se polinomios nao forem iguais apenas ordena um do lado do outro
					  temp.coeficiente = a.inicio->P.coeficiente;
					  temp.expoente = a.inicio->P.expoente;
					  temp.referencia = a.inicio->P.referencia;
					  inserirFimL_EST(poliresultante, temp);
					  if (a.inicio->proximo != NULL) { // Atualizando o ponteiro para fazer operacoess
						  a.inicio = a.inicio->proximo;
					  }
					  temp.coeficiente = b.inicio->P.coeficiente;
					  temp.expoente = b.inicio->P.expoente;
					  temp.referencia = b.inicio->P.referencia;
					  inserirFimL_EST(poliresultante, temp);
					  if (b.inicio->proximo != NULL) { // Atualizando o ponteiro para fazer operacoess
						  b.inicio = b.inicio->proximo;
					  }
				  }
			  case 3://multiplicar
				  if (a.inicio->P.expoente == b.inicio->P.expoente && a.inicio->P.referencia == b.inicio->P.referencia) {
					  temp.coeficiente = a.inicio->P.coeficiente * b.inicio->P.coeficiente;
					  temp.expoente = a.inicio->P.expoente+b.inicio->P.expoente;
					  temp.referencia = a.inicio->P.referencia;
					  inserirFimL_EST(poliresultante, temp);
					  if (a.inicio->proximo != NULL) { // Atualizando o ponteiro para fazer operacoes
						  a.inicio = a.inicio->proximo;
						  b.inicio = b.inicio->proximo;
					  }
				  }
				  else {//se polinomios nao forem iguais apenas ordena um do lado do outro
					  temp.coeficiente = a.inicio->P.coeficiente;
					  temp.expoente = a.inicio->P.expoente;
					  temp.referencia = a.inicio->P.referencia;
					  inserirFimL_EST(poliresultante, temp);
					  if (a.inicio->proximo != NULL) { // Atualizando o ponteiro para fazer operacoess
						  a.inicio = a.inicio->proximo;
					  }
					  temp.coeficiente = b.inicio->P.coeficiente;
					  temp.expoente = b.inicio->P.expoente;
					  temp.referencia = b.inicio->P.referencia;
					  inserirFimL_EST(poliresultante, temp);
					  if (b.inicio->proximo != NULL) { // Atualizando o ponteiro para fazer operacoess
						  b.inicio = b.inicio->proximo;
					  }
				  }
			 
		 default:
			cout << "Opcao invalida";
		}
	}
		
	
	return poliresultante;
}


#endif OPERACOES_MATEMATICAS_POLINIMIOS