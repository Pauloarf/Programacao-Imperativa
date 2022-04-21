#define MAX 100

typedef struct staticStack{
    int sp;
    int values[MAX];
}*SStack;

typedef struct staticQueue
{
    int front;
    int length;
    int values[MAX];
}*SQueue;

typedef struct dinStack{
    int size;       // Guarda o tamanho do array values
    int sp;
    int *values;
}*DStack;

typedef struct dinQueue{
    int size;       // Guarda o tamanho do array values
    int front;
    int length;
    int *values;
}*DQueue;
