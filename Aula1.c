/*      LINGUAGEM C
    Linguagem de programação de uso genérico
    Imperativa e procedimental
    Estaticamente (fracamente) tipada
    Compilada
    Baixo nivel
    Criada em 1972


        LIVRO PARA C
    The C Programming Language (Brian W.Kernighan / Dennis M.Ritchie)


        DECLARAR VARIÁVEIS
    Tipo id;
    Tipo id = expr;
    Tipo id0, id1, ..., idn;
    Tipo id0 = expr0, id1 = expr0, ...;
 

        TIPOS NUMÉRICOS
    Tipo                Modificadores

    char                signed,unsigned
    short int           signed(DEFAULT),unsigned(Só positivos)
    int                 signed(DEFAULT),unsigned(Só positivos)
    long int            signed(DEFAULT),unsigned(Só positivos)
    float               signed(DEFAULT),unsigned(Só positivos)
    double              signed(DEFAULT),unsigned(Só positivos)


int dobro (int a) {  //Definição
    int r;
    r = 2 * a;
    return r;
}

int main() {
    int r;
    r = dobro (3);  //Declaração
    return 0;
}

#include "x"  (Incluir informação do ficheiro x)
              (Execução de pré-processamento (Para o compilador))

        BIBLIOTECAS PRÉ-DEFINIDAS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

 <> -> Bibliotecas
 "" -> Ficheiros da mesma diretoria

        EXEMPLO PRINTF

#include <stdio.h>

int main() {
    printf ("Ola Mundo!\n");
    printf ("O dobro de %s e %d\n", "dois", 4);
    return 0;
}

%d -> decimal
%x -> hexadecimal
%f -> float
%e -> notação centifica
%c -> caracter
%s -> string
%% -> caracter %

%nd
%.pf
%n.pf

/ -> divisão inteira
% -> resto da divisão

*/

