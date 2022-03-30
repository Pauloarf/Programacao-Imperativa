#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
char *myStrcat(char s1[], char s2[]){
    int i, size;
    for(size = 0; s1[size] != '\0'; size++);
    for(i = 0; s2[i] != '\0'; i++, size++){
        s1[size] = s2[i];
    }
    s1[size] = '\0';
    return s1;
}

/* This function copys the string in source to dest*/
char *myStrcpy(char *dest, char source[]){
    int i;
    for(i = 0; source[i] != '\0'; i++){
        dest[i] = source[i];
    }
    dest[i] = '\0';
    return dest;
}

/* This function tests if the strings are the same, otherwise it returns <0 for s1<s2*/
/*                                                                    or >0 for s1>s2*/
int myStrcmp(char s1[], char s2[]){
    int i;
    for(i = 0; s1[i] != '\0' && s2[i] != '\0'; i++){
        if(s1[i] == s2[i]);
        else break;
    }
    if(s1[i] < s2[i]) return -1;
    if(s1[i] > s2[i]) return 1;
    return 0;
}

/* This funtion returns where the s1 pointer starts if s2 happens inside s1*/
char *myStrstr(char s1[], char s2[]){
    int i;
    char a = 1;
    for(i = 0; s1[i] != '\0'; i++){
        if(s1[i] == s2[0]){
            int aux = i;
            int j;
            for(j = 0; s2[j] != '\0'; j++, aux++){
                if(s1[aux] == s2[j]);
                else break;
            }
            if(s2[j] == '\0'){
                s1 = s1 + i;
                return s1;
            }
        }
    }
    return NULL;
}

int main(){
    char s1[MAX] = "tentei, e no fim ";
    char s2[MAX] = "ate deu";
    int n, r;
    char c;
    
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
    myStrcat(s1,s2); dumpV(s1);
    
    printf("\nA string s2 = "); dumpV(s2); 
    printf("copiada para s1, transforma s1 em ");
    myStrcpy(s1,s2); dumpV(s1);

    r = myStrcmp(s1,s2);
    printf("\nTestar igualdade das strings: "); dumpV(s1);
    printf("e                             "); dumpV(s2);
    printf("r = %d", r);

    char ss1[MAX] = "s2 pertence a s1";
    char ss2[MAX] = "pertence";
    printf("\n\nstrstr de "); dumpV(ss2); 
    printf("e         "); dumpV(ss1);
    printf("e igual a {%s}",myStrstr(ss1,ss2));
}