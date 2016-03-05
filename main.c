//
//  conjuntos.c
//
//  Created by:
//      Luiz Eduardo Ximenes Neto
//      Camila Ribeiro Rodrigues
//
//  Programa com o intuido de exibir informações
//
//

#include <stdio.h>
#include <stdlib.h>
#include "conjuntos.h"

Conjunto* _conjunto1;
Conjunto* _conjunto2;

void executaAcao(int n){
    if(n == 1){             // Adicionar elemento a lista 1
        int n;

        printf("\n\nDigite o numero a ser adicionado: ");
        scanf("%d",&n);

        _conjunto1 = inserir(_conjunto1, n);

    }else if(n == 2){       // Adicionar elemento a lista 2
        int n;

        printf("\n\nDigite o numero a ser adicionado: ");
        scanf("%d",&n);

        _conjunto2 = inserir(_conjunto2, n);

    }else if(n == 3){       // Unir conjuntos

    }else if(n == 4){       // Intercectar conjuntos
        imprimeConjunto(intersectaConjuntos(_conjunto1,_conjunto2));

    }else if(n == 5){       // Listar conjuntos
        printf("\n\nLista 01: \n");
        imprimeConjunto(_conjunto1);
        printf("\n\nLista 02: \n");
        imprimeConjunto(_conjunto2);

    }else if(n == 6){       // Verificar igualdade
        printf("Os conjuntos%s são iguais",verificaIgualdade(_conjunto1,_conjunto2)?"":" não");

    }else if(n == 7){       // Listar conjuntos
        system("cls");
    }
}

void menuPrincipal(){
    int controle = 1;
    do{
        // Exibe um menu muito estiloso, merece até oscar
        printf("\n\n");
        printf("\n  _____           _         _  ");
        printf("\n |     |___ ___  |_|_ _ ___| |_ ___ ___ ");
        printf("\n |   --| . |   | | | | |   |  _| . |_ -|");
        printf("\n |_____|___|_|_|_| |___|_|_|_| |___|___|");
        printf("\n               |___|  \n\n\n");

        printf("\n    1) Adicionar elemento a lista 1");
        printf("\n    2) Adicionar elemento a lista 2");
        printf("\n    3) Unir conjuntos              ");
        printf("\n    4) Intercectar conjuntos       ");
        printf("\n    5) Listar conjuntos            ");
        printf("\n    6) Verificar igualdade         ");
        printf("\n    7) Limpar tela               \n");
        printf("\n    0) Fechar aplicativo  \n\n     ");

        // Lê numero da ação
        fflush(stdin);
        scanf("%d",&controle);

        // Processa opção selecionada
        executaAcao(controle);

    }while(controle != 0);
}

    // Inserindo valores de teste
    void inserirVTeste(){   // TODO: Remover
        int n;
        for(n=0 ; n<20 ; n++){
            _conjunto1 = inserir(_conjunto1, n*2);
            _conjunto2 = inserir(_conjunto2, n*4);
        }
    }

int main(int argc, const char * argv[]) {

    // Inicializando variaveis gloais
    _conjunto1 = inicializaConjunto();
    _conjunto2 = inicializaConjunto();

    // Inserindo valores de teste
    inserirVTeste();

    // Chamando menu principal
    menuPrincipal();

    return 0;
}
