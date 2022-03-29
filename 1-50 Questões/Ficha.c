#include <stdio.h>
#include <stdlib.h>

int bitsUm(unsigned int n){
    int r = 0;
    while(n > 0){
        if(n % 2 != 0)r +=1;
        n /= 2;
    }
    return r;
}

int trailingZ(unsigned int n){
    int r = 0;
    while(n > 0){
        if(n % 2 == 0)r +=1, n /= 2;
        else break;
    } 
    return r;
}

int main(){
    int n, r;
    printf("Introduza um inteiro para obter informacao acerca do mesmo em base 2:\n\t\t");
    scanf("%d",&n);
    r = bitsUm(n);
    printf("Existem -%d- bits a 1 na representacao deste numero em binario\n", r);
    r = trailingZ(n);
    printf("Existem -%d- bits a 0 no final da representacao deste numero em binario\n", r);
    return 0;
}