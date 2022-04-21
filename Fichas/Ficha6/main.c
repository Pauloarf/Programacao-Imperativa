#include "functions.c"

int main(){
    SStack stack;
    SinitStack(stack);
    printf("%d", stack->sp);
    printf("%d", Spush(stack,3));
    return 0;
}

