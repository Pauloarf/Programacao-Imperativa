#include <stdio.h>
#include <stdlib.h>

#define MAX 70 //Max array size

/* This function prints the content of an array*/
void dumpV(char v[]){
    int i;
    putchar('{');
    for (i=0; v[i] != '\0'; i++) printf ("%c", v[i]);
    putchar('}');
    putchar ('\n');
}

/* This function returns the number of 1's in the binary representation of n*/
int bitsUm(unsigned int n){
    int r = 0;
    while(n > 0){
        if(n % 2 != 0)r +=1;
        n /= 2;
    }
    return r;
}

/* This function returns the number of 0's in the end of the binary representation of n*/
int trailingZ(unsigned int n){
    int r = 0;
    while(n > 0){
        if(n % 2 == 0)r +=1, n /= 2;
        else break;
    } 
    return r;
}

/* This funtion outputs the number n in base 2 (binary)*/
void showBinary(unsigned int n){
    int size = 0, m;
	for	(m = n; m > 0; m >>= 1) size++;
	for	(size--; size >= 0; size--)
	    printf("%d", (n >> size) & 1);
    putchar('\n');
}

/* This function returns de number of digits of number n*/
int qDig(unsigned int n){
    int r;
    while(n > 0){
        r += 1;
        n /= 10;
    }
    return r;
}

/* This function is my version of the pre-define function *strcat in c*/
char *mystrcat(char s1[], char s2[]){
    int i, size;
    for(size = 0; s1[size] != '\0'; size++);
    for(i = 0; s2[i] != '\0'; i++, size++){
        s1[size] = s2[i];
    }
    s1[size] = '\0';
    return s1;
}

int main(){
    char s1[MAX] = "tentei, e no fim ";
    char s2[MAX] = "ate deu";
    int n, r;
    
    printf("Introduza um inteiro para obter informacao acerca do mesmo em base 2:\n");
    scanf("%d",&n);
    printf("\nA representacao em binario do numero (%d) = ", n);
    showBinary(n);
    r = bitsUm(n);
    printf("Existem (%d) bits a 1 na representacao deste numero em binario\n", r);
    r = trailingZ(n);
    printf("Existem (%d) bits a 0 no final da representacao deste numero em binario\n", r);
    r = qDig(n);
    printf("O numero (%d) tem (%d) digitos\n\n", n, r);
    
    printf("As strings: "); dumpV(s1); 
    printf("e           "); dumpV(s2);
    printf("concatenadas originam a string: ");
    mystrcat(s1,s2); dumpV(s1);
    return 0;
}