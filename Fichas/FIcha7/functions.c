#include <stdio.h>
#include <stdlib.h>
#include "structs.h"

void libertaLista(Palavras l){
    Palavras aux;
    while(l != NULL){
        aux = l;
        l = l->prox;
        free(aux);
    } 
}

void listaPal(Palavras l){
    Palavras aux;
    for(aux = l; aux != NULL; aux = aux->prox){
        printf("Palavra: %s, occorencias: %d\n", aux->palavra, aux->ocorr);
    }
}

Palavras acrescentaInicio(Palavras l, char *p){
    Palavras nova;
    nova = malloc(sizeof(struct celula));
    nova->palavra = p;
    nova->ocorr = 1;
    nova->prox = l;
    return nova;
}