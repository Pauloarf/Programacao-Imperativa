#include "functions.c"

int main(){
    struct staticStack s1;
    SStack stack = &s1;
    int a;
    SinitStack(stack);
    printf("%d\n", stack->sp);
    Spush(stack,3);
    Spush(stack,5);
    Spush(stack,15);
    printStack(stack);
    Spop(stack, &a);
    printf("O numero retirado foi: %d\n", a);
    printStack(stack);
    Stop(stack, &a);
    printf("O numero retirado foi: %d\n", a);
    printStack(stack);
    return 0;
}

