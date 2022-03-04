#include <stdio.h>
#include <math.h>

//Exercicio 1
int mdc1(int a, int b){
    int c;
    if(a < b){
        for(c = a; c > 0; c--){
            if (a%c == 0 && b%c == 0) break;
        }        
    }
    else for(c = b; c > 0; c--){
            if (b%c == 0 && a%c == 0) break;
    }
    return c;
}

/* (brandão)
int mdc2(int a, int b){
    int c = 0;
    do{
        while(a <= b && a > 0) b = b - a;
        while(a <= b && a > 0) a = a - b; 
        if(b <= 0 || a <= 0){ 
            if (a == 0) c = b; 
            else if(b == 0) c = a;
            return c;
        }
    } while(1);
}
*/

// Exercicio 2
int mdc2(int a, int b){         //menos steps
    int c = 0;
    do{
        while(a <= b && a > 0) b -= a;
        while(b <= a && b > 0) a -= b; 
    }while(b > 0 && a > 0);
    if (a == 0) c = b; 
    else if(b == 0) c = a;
    return c;
}

int mdc2_(int a, int b){        //mais steps
    int c;
    while(b != 0 && a != 0){
        if(a <= b) b -= a;
        if(b <= a) a -= b;
    }
    if (a == 0) c = b; 
    else if(b == 0) c = a;
    return c;
}

int mdc4(int a, int b){         //menos iterações
    int c = 0;
    do{
        while(a <= b && a > 0) b %= a;
        while(b <= a && b > 0) a %= b; 
    }while(b > 0 && a > 0);
    if (a == 0) c = b; 
    else if(b == 0) c = a;
    return c;
}