//
//  conjuntos.c
//
//  Created by:
//      Luiz Eduardo Ximenes Neto
//      Camila Ribeiro Rodrigues
//
//



#include <stdlib.h>
#include <stdio.h>
#include "conjuntos.h"


Conjunto* inicializaConjunto(){
    return NULL;
}

Conjunto* inserir(Conjunto *conjunto, int n){
    // Instanciando novo conjunto na memoria
    Conjunto *novoConjunto = (Conjunto*) malloc(sizeof(Conjunto));

    // Atribuindo valores
    novoConjunto->valor   = n;
    novoConjunto->proximo = conjunto;

    // retornando novo vetor raiz
    return novoConjunto;
}

void imprimeConjunto (Conjunto *conjunto){
    Conjunto *c;   // Ponteiro auxiliar para percorrer lista
    int cont = 1;  // Contador para auxiliar exibição

    // Percorrendo lista encadeada
    for (c = conjunto ; c != NULL ; c = c->proximo)
        printf("elemento n %2d = %3d\n",cont++, c->valor);
}

int verificaIgualdade (Conjunto *c1, Conjunto *c2){
    // Inicializando listas auxiliares
    Conjunto *ca1, *ca2;

    // Variavel para a verificação de diferença
    // Valores:
    //          0 == false
    //          1 == true
    int controle = 0;

    // verificando se todos os elementos de c1 existem em c2
    for (ca1 = c1 ; ca1 != NULL ; ca1 = ca1->proximo){
        for (ca2 = c2 ; ca2 != NULL ; ca2 = ca2->proximo){
            if(ca1->valor == ca2->valor)
                controle = 1; // Encontra igualdade
        }

        if(controle)
            controle = 0;     // Resentado para proximo loop
        else
            return 0;         // Desigualdade encontrada
    }

    // verificando se todos os elementos de c2 existem em c1
    for (ca2 = c2 ; ca2 != NULL ; ca2 = ca2->proximo){
        for (ca1 = c1 ; ca1 != NULL ; ca1 = ca1->proximo){
            if(ca1->valor == ca2->valor)
                controle = 1; // Encontra igualdade
        }

        if(controle)
            controle = 0;     // Resentado para proximo loop
        else
            return 0;         // Desigualdade encontrada
    }

    // Retornando true, pois nenhuma desigualdade foi encontrada
    return 1;
}

Conjunto* intersectaConjuntos (Conjunto *c1, Conjunto *c2){
    // Inicializando listas auxiliares
    Conjunto *ca1, *ca2;

    // Inicializando lista de retorno
    Conjunto *retorno = NULL;

    // Percorrendo listas encadeadas
    for (ca1 = c1 ; ca1 != NULL ; ca1 = ca1->proximo){
        for (ca2 = c2 ; ca2 != NULL ; ca2 = ca2->proximo){
            if(ca1->valor == ca2->valor)
                retorno = inserir(retorno, ca1->valor);
        }
    }
    return retorno;
}
