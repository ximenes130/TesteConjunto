//
//  BibConjunto.h
//  CamilaRibeiroTConjunto
//
//  Created by Camila Ribeiro Rodrigues on 29/02/16.
//  Copyright © 2016 Camila Ribeiro Rodrigues. All rights reserved.
//

#ifndef ConjuntoS_H_INCLUDED
#define ConjuntoS_H_INCLUDED

typedef struct conjunto Conjunto;

struct conjunto{
	int valor;
	Conjunto *proximo;
};


// /////////////////////////////////////////////
// Operações com lista encadeada (Conjuntos)  //
// /////////////////////////////////////////////

/// concluido
/// Responsavel: Luiz Eduardo Ximenes Neto
/// Objetivo: Inicializar Conjunto em memoria
/// Retorno:  ------
Conjunto* inicializaConjunto();

/// concluido
/// Responsavel: Luiz Eduardo Ximenes Neto
/// Objetivo: Insere elemento da lista
/// Retorno:  -----
Conjunto* inserir(Conjunto *c, int n);

/// concluido
/// Responsavel: Luiz Eduardo Ximenes Neto
/// Objetivo:   Imprime na tela os valores salvos na lista encadeada
/// Parametros: Conjunto *c1
void imprimeConjunto (Conjunto *c);

/// concluido
/// Responsavel: Luiz Eduardo Ximenes Neto
/// Objetivo: Verificar a igualdade entre dois Conjuntos
/// Parametros: Conjunto *c1, Conjunto *c2
/// Retorno:
///          0 == False
///          1 == True
int verificaIgualdade (Conjunto *c1, Conjunto *c2);

// ///////////////////////////
// Operações de conjuntos   //
// ///////////////////////////

/// concluido
/// Responsavel: Luiz Eduardo Ximenes Neto
/// Objetivo:   Intercectar dois Conjuntos
/// Parametros: Conjunto *c1, Conjunto *c2
/// Retorno:    Lista encadeada de inteiros contendo a união dos Conjuntos
///             passados por parametro
Conjunto* intersectaConjuntos (Conjunto *c1, Conjunto *c2);

/// Objetivo:   Unir dois Conjuntos
/// Parametros: Conjunto *c1, Conjunto *c2
/// Retorno:    Lista encadeada de inteiros contendo a união dos Conjuntos
///             passados por parametro
Conjunto* unirConjuntos (Conjunto *c1, Conjunto *c2);

#endif // ConjuntoS_H_INCLUDED
