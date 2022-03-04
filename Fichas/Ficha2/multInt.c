#include <stdio.h>
#include <math.h>

//Exercicio 1
float multInt1(int n, float m){
    float r = 0;
    for(r = 0; n > 0; n--) r += m;
    return r;
}

//Exercicio 2
float multInt2(int n, float m){
    float r = 0;
    while(n >= 1){
        if (n % 2 != 0) r += m;
        m *= 2;
        n /= 2;
    }
    return r;
}

//Exercicio 3
float multInt3 (int n, float m, int *count){
    float r = 0;
    while(n >= 1){
        if (n % 2 != 0){
            r += m;
            *count += 1;                   // count -> contagem de operações com floats
        }
        m *= 2;
        n /= 2;
    }
    return r;
}
