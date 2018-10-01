#ifndef OPERACOES_MATEMATICAS_POLINIMIOS
#define OPERACOES_MATEMATICAS_POLINIMIOS
#include "FUNCIONAL.H"
#include <iostream>
using namespace std;
/*operacoes com polinomio esta dando errado, preciso percorrer os dois polinomios e ir comparando, do jeito que ta só ta comparando uma vez*/

ListaEst operacoes(ListaEst &a, ListaEst &b, int opcao,int grau) {
	ElementoPolinomio temp;
	
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
			break;
		default:
			cout << "Opcao invalida";
		}
	}
		
	
	return poliresultante;
}
//	}
//	switch (opcao) {
//	   case 1:
//		  if (a.inicio->P.expoente == b.inicio->P.expoente && a.inicio->P.referencia == b.inicio->P.referencia) {
//			  temp.coeficiente = a.inicio->P.coeficiente + b.inicio->P.coeficiente;
//			  temp.expoente = a.inicio->P.expoente;
//			  temp.referencia = a.inicio->P.referencia;
//			   return temp;
//		   }
//		break;
//	  /* case 2:
//		   if (a.expoente == b.expoente && a.referencia == a.referencia) {
//			   temp.coeficiente = a.coeficiente - b.coeficiente;
//			   return temp;
//		   }
//		   break;
//	   case 3:
//		   if (a.expoente == b.expoente && a.referencia == a.referencia) {
//			   temp.coeficiente = a.coeficiente * b.coeficiente;
//			   temp.expoente = a.expoente + b.expoente;
//			   return temp;
//		   }
//		   break;
//	   case 4:
//		   if (a.expoente == b.expoente && a.referencia == a.referencia) {
//			   temp.coeficiente = a.coeficiente / b.coeficiente;
//			   temp.expoente = a.expoente - b.expoente;
//			   return temp;
//		   }
//		   break;*/
//	   default: 
//		   cout << "Opcao invalida";
//	}
//
//}
//falta fazer operacoes com os polinomios

#endif OPERACOES_MATEMATICAS_POLINIMIOS