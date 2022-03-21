#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void dumpV (int v[], int N){
    int i;
    for (i=0; i<N; i++) printf ("%d ", v[i]);
    putchar ('\n');
}

/* Exercise 1
    a)
        output = 1 1 4
                 2 2 6
                 3 3 8
                 4 4 10
                 5 5 12

    b)
        output = 13
*/

// Exercise 2
void swapM(int *x, int *y){
    int c = *x;
    *x = *y;
    *y = c;
}

// Exercise 3
void swap(int v[], int i, int j){
    int c = v[i];
    v[i] = v[j];
    v[j] = c;
}

// Exercise 4
int soma(int v[], int N){
    int c = 0;
    for(int i = 0; i < N; i++){
        c += v[i];
    }
    return c;
}

// Exercise 5
void inverteArray(int v[], int N){
    for(int i = 0; i < N; i++, N--){
        swap(v,i,(N-1));
    }
}

void inverteArrayM(int v[], int N){
    for(int i = 0; i < N; i++, N--){
        swapM(&v[i], &v[N-1]);
    }
}

// Exercise 6
int maximum(int v[], int N, int *m){
    for(int i = 0; i < N; i++){
        if(v[i] >= *m) *m = v[i];
    }
    return *m;
}

// Exercise 7
void quadrados(int q[], int N){
    for(int i = 0; i < N; i++){
        q[i] = (q[i]*q[i]); 
    }
} 

// Exercise 8 a)
void pascal(int v[], int N){
    for(int n = 0; n <= N; n++){ 
        v[n] = 1;
        for(int i = n-1; i > 0; i--){
            v[i] = v[i] + v[i-1];
        }
    }
}

int fact (int n){
    int t = 1;
    if (n==0) t;
    while (n>0){
        t = t*n;
        n--;
    }
    return t;
}

void Pascal_2(int v[], int N){
    for(int k = 0; k <= N; k++){                  //Pascal function using combinations
        v[k] = fact (N)/(fact (k)*fact(N-k));     // n! / k! * (n-k!)
    }
}

// Exercise 8 b)
void desenhaTrianguloP(int N){
    int v[100];
    for(int n = 0; n <= N; n++){ 
        v[n] = 1;
        for(int i = n-1; i > 0; i--){
            v[i] = v[i] + v[i-1];
        }
        dumpV(v,n+1);
    }
}


int main()
{  
    printf ("Tests\n");
    // Testing swap Functions

    int a, b, v[10] = {10, 6, 2, 3, 5, 1, 5, 9, 8, 7};
    int x = 3, y = 5;
    printf ("x = %d y = %d\n", x, y);
    swapM (&x, &y);
    printf ("x = %d y = %d\n", x, y);
    
    printf ("%d %d\n", v[0], v[9]);
    swap (v,0,9);
    printf ("%d %d\n", v[0], v[9]);

    printf ("ao invertemos o array "); dumpV (v,10);
    inverteArray (v,10);
    printf ("obtemos "); dumpV (v,10);
    
    // Testing function maximum, soma and quadrados
    x = maximum (v,10, &y);
    printf ("O maior elemento de "); dumpV (v,10);
    printf ("e %d\n", y);
    
    printf ("Os 10 primeiros quadrados: "); 
    quadrados (v,10); 
    dumpV (v,10);
    
    x = soma (v,10);
    printf ("A soma dos elementos de "); dumpV (v,10);
    printf ("e %d\n", x);
    
    // Testing Pascal Triangle Function
    printf ("A linha 5 do triangulo de Pascal e ");
    pascal (v,5); dumpV (v,6);
    
    printf ("As linhas 0 a 10 do triangulo de Pascal\n\n");
    desenhaTrianguloP (10);
    
    printf ("\nFim dos testes\n");

    return 0;
}
