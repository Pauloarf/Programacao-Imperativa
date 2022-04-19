#include <stdio.h>
#include <stdlib.h>
#include "stack.c"

int main(){
    SStack stack;
    SinitStack(&stack);
    printf("%d", stack->sp);
    printf("%d", Spush(&stack,3));
    return 0;
}

