#include "static_functions.c"
#include "dinamic_functions.c"

int main(){
    struct staticStack s1;
    SStack stack = &s1;
    struct dinStack ds1;
    DStack Dstack = &ds1;
    
    struct staticQueue q1;
    SQueue queue = &q1;
    struct dinQueue dq1;
    DQueue Dqueue = &dq1;
    
    int a, opcao;
    while(opcao < 1 || opcao > 4){
        printf("\tChose what you want to test:\n");
        printf("Press 1 for static stacks\n");
        printf("Press 2 for dinamic stacks\n");
        printf("Press 3 for static queues\n");
        printf("Press 4 for dinamic queues\n");
        scanf("%d", &opcao);
        system("cls");
        if(opcao < 1 || opcao > 4) printf("<INCORRECT NUMBER>\n");
    }
    switch(opcao){
    case 1:
        printf("---- Testing static stacks ----\n");
        SinitStack(stack);
        if(stack->sp == -1) printf("Stack initialised\n");
        else printf("Stack not initialized\n");
        for(int i = 0; i < 10; i++){
            if(Spush(stack, i) != 0) printf("ERROR pushing %d\n", i);
        }
        printStack(stack);
        Spop(stack, &a);
        printf("O numero retirado foi: %d\n", a);
        printStack(stack);
        Stop(stack, &a);
        printf("O numero guardado em 'a' foi: %d\n", a);
        printStack(stack);
        printf("---- Done testing static stacks ----\n");
        break;
    case 2:
        printf("---- Testing dinamic stacks ----\n");
        
        printf("---- Done testing dinamic stacks ----\n");
        break;
    case 3:
        printf("---- Testing static queues ----\n");
        SinitQueue(queue);
        if(queue->length == 0) printf("Queue initialised\n");
        else printf("Queue not initialised\n");
        for(int i = 0; i < 10; i++){
            if(Senqueue(queue, i) != 0) printf("ERROR pushing %d\n", i);
        }
        printQueue(queue);
        Sdequeue(queue, &a);
        printf("O numero retirado foi: %d\n", a);
        printQueue(queue);
        Sfront(queue, &a);
        printf("O numero guardado em 'a' foi: %d\n", a);
        printQueue(queue);
        printf("---- Done testing static queues ----\n");
        break;
    case 4:
        printf("Nothing yet");
        break;
    }
    printf("\n");
    return 0;
}

