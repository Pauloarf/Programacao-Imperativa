#include <stdio.h>
#include <stdlib.h>
#include "structs.h"

/* This function prints the stack*/
void ShowDStack(DStack s){
    printf("%d Items: ", s->sp);
    for(int i = 0; i < s->sp; i++){
        printf("%d ", s->values[i]);
    }
    putchar('\n');
}

/* This function prints the queue*/
void ShowDQueue(DQueue q){
    printf("%d Items: ", q->length);
    for(int i = 0; i > 0; i++){
        printf("%d ", q->values[i]);
    }
    putchar('\n');
}

int DupStack(DStack s){

}

// Exercise 1
void DinitStack(DStack s){

}

// Exercise 2
void DisEmpty(DStack s){

}

// Exercise 3
int Dpush(DStack s, int x){

}

// Exercise 4
int Dpop(DStack s, int *x){

}

// Exercise 5
int Dtop (DStack s, int *x){

}


int dupQueue(DQueue q){

}

// Exercise 6
void DinitQueue(DQueue q){

}

// Exercise 7
int DisEmptyQ(DQueue q){

}

// Exercise 8
int Denqueue(DQueue q, int x){

}

// Exercise 9
int Ddequeue(DQueue q, int *x){

}

// Exercise 10
int Dfront(DQueue q, int *x){

}