#include <stdio.h>
#include <stdlib.h>
#include "strucks.h"

// Exercise 1
void SinitStack(SStack s){
    s->sp = -1;             // Nao inicializa
}

// Exercise 2
int SisEmpty(SStack s){
    return (s->sp == -1); // Duvida
}

// Exercise 3
int Spush(SStack s, int x){
    int r = 0;
    if(s->sp < MAX - 1){
        s->sp++;
        s->values[s->sp] = x;
    }
    else r = 1;
    return r;
}

// Exercise 4
int Spop(SStack s, int *x){
    int r = 0;
    if(s->sp != -1){
        *x = s->values[s->sp];
        s->sp--;
    }
    else r = 1;
    return r;
}

// Exercise 5
int Stop(SStack s, int *x){
    int r = 0;
    if(s->sp != -1){
        *x = s->values[s->sp];
    }
    else r = 1;
    return r;
}

void SinitQueue(SQueue q){

}

int SisEmptyQ(SQueue q){

}

int Senqueue(SQueue q, int x){

}

int Sdequeue(SQueue q, int *x){
    
}

int Sfront(SQueue q, int *x){

}