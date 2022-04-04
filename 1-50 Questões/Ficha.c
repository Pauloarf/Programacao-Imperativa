#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include <assert.h>

#define MAX 70 //Max array size

/* This function removes the s[n] char from the s array*/
void rmChar(char s[], int n){
    for(int i = n+1; s[i] != '\0'; i++, n++){
        s[n] = s[i];
    }
    s[n] = '\0';
}

/* This function returns 1(true) if a is a vocal, and returns 0(false) if it is not*/
int isVocal(char a){
    if (a == 'a' ||a == 'e' ||a == 'i' ||a == 'o' ||a == 'u'
        ||a == 'A' ||a == 'E' ||a == 'I' ||a == 'O' ||a == 'U') return 1;
    else return 0;
}

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
    if(n == 0)r = 32;
    return r;
}

/* This function outputs the number n in base 2 (binary)*/
void showBinary(unsigned int n){
    int size = 0, m;
	for	(m = n; m > 0; m >>= 1) size++;
	for	(size--; size >= 0; size--)
	    printf("%d", (n >> size) & 1);
    putchar('\n');
}

/* This function returns de number of digits of number n*/
int qDig(unsigned int n){
    int r = 0;
    while(n > 0){
        r++;
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

/* This function returns where the s1 pointer starts if s2 happens inside s1*/
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
    if(s2[0] == '\0') return s1;
    return NULL;
}

/*  This function inverts a string*/
void myStrrev(char s[]){
    int i, j;
    char aux[MAX];
    for(i = 0; s[i] != '\0'; i++){
        aux[i] = s[i];
    }
    i -= 1;
    for(j = 0; i >= 0; j++, i--){
        s[j] = aux[i];
    }
    s[j] = '\0';
}

/* This function removes the voals from a string*/
void myStrnoV(char s[]){
    for(int i = 0; s[i] != '\0';){
        if(isVocal(s[i])) rmChar(s, i);
        else i++;
    }
}

/* This function makes words in t[], at max, n characters long. The words will be separated by spaces*/
void truncW (char t[], int n){
    int i, j = 0;
    for(i = 0; t[i] != '\0'; i++){
        if(n == 0)break;
        if(t[i] == ' ') j = 0;
        else j++;
        if(j == n){
            while(t[i+1] != ' ' && t[i+1] != '\0'){
                if(t[i+1] != ' ')rmChar(t, i+1);
                else i++;
            }
        }
    }
    i = 0;
    if(n == 0)while(t[i] != '\0'){
        if(t[i] != ' ')rmChar(t, i);
        else i++;
    }
}

/* This function returns the most frequent charecter in a string*/
char charMaisfreq(char s[]){
    int i, j;
    int max = 0, maybe = 0;
    char aux = '0';
    for(i = 0; s[i] != '\0'; i++){
        for(j = 0; s[j] != '\0'; j++){
            if(s[i] == s[j]) maybe++;
        }
        if(maybe > max) max = maybe, aux = s[i];
        maybe = 0;
    }
    return aux;
}

/* This function give us the number of elements, of the largest sub-string with iqual consecutive charectares*/
int iguaisConsecutivos(char s[]){
    int i, max = 0, aux = 1;
    for(i = 0; s[i] != '\0'; i++){
        if(s[i] == s[i+1]) aux++;
        if(aux > max) max = aux;
        if(s[i] != s[i+1]) aux = 1;
    }
    return max;
}

/* This function returns true if the value k is already in the string s*/
int pertence(char s[], int i, int j){
    for(; i < j; i++){
        if(s[i] == s[j]) return 1;
    }
    return 0;
}

/* This function give us the number of elements, of the largest sub-string with diferent consecutive charectares*/  
int difConsecutivos(char s[]){
    int i, j, aux, max = 0;
    for(i = 0; s[i] != '\0'; i++){
        aux = 0;
        for(j = i; s[j] != '\0'; j++){
            if(pertence(s, i, j))break;
            else aux++;
        }
        if(aux > max) max = aux;
    }
    return max;
}

/* This function returns the lenght of the biggest commun prefix from the strings*/
int maiorPrefixo (char s1 [], char s2 []) {
    int aux = 0;
    int i, j;
    for(i = 0; (s1[i] != '\0') && (s2[i] != '\0'); i++){
        if(s1[i] != s2[i]){
            do{
                i++;
            }while((s1[i] != ' ') && (s2[i] != ' '));
        }
        if(s1[i] == s2[i]) aux++;
    }
    return aux;
}

/* This function returns the lenght of the biggest commun sufix from the strings*/


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

    printf("\n\nA string "); dumpV(ss1);
    printf("invertida e igual a: ");
    myStrrev(ss1); dumpV(ss1);

    printf("\n\nA string "); dumpV(ss1);
    printf("sem vogais e igual a: ");
    myStrnoV(ss1); dumpV(ss1);

    char s3[MAX] = "Liberdade, Igualdade Faternidade , test truncs";
    printf("\n\nA string "); dumpV(s3);
    printf("apos truncW(4) e: ");
    myTruncW(s3, 4); dumpV(s3);

    printf("\n\nO carater mais frequente em "); dumpV(s3);
    printf("e {%c}", charMaisfreq(s3));

    char s4[MAX] = "aabdccccaac";
    printf("\n\nO comprimento da maior sub-string com caracteres iguais em "); dumpV(s4);
    printf("e {%d}", iguaisConsecutivos(s4));

    printf("\n\nO comprimento da maior sub-string com caracteres diferentes em "); dumpV(s4);
    printf("e {%d}", difConsecutivos(s4));

}