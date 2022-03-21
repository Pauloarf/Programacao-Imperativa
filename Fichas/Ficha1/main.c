#include <stdio.h>
#include <stdlib.h>
#include "horizontal.c"
#include "vertical.c"

// Answers for sheet 1 (PI). Ano 2021/2022. Universidade do minho.


//Exercise 1 (Making a # (char) square!)
void ex1(int n){
    for (int l = 0; l < n; l++){
        for (int m = n; m > 0; m--)
            putchar('#');
        putchar('\n');
    }
}

//Exercise 2 (Making a square that changes between # (char) and _ (char)!)
void ex2(int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if ( (i+j)%2 == 0 ) putchar('#');
            else putchar('_');
        }
        putchar('\n');
    }
}

// Exercise 4 (Making a # circle!)
void circulo (int n){
  for (int i = 0; i <= 2*n;i++){
    for (int j = 0; j <= 2*n; j++){
      if (((j-n)*(j-n)+(i-n)*(i-n)) <= n*n)  // y^2 + x^2 <= radius^2
        putchar('#');
      else putchar(' ');
    }
    putchar('\n');
  }
}

int main(int n){
    n = 5;
    printf("Exercise 1\n");
    ex1(n);
    putchar ('\n');
    printf("Exercise 2\n");
    ex2(n);
    putchar('\n');
    printf("Exercise 3.1\n");
    triangulo_horizontal(n);
    putchar('\n');
    printf("Exercise 3.2\n");
    triangulo_vertical(n);
    putchar('\n');
    printf("Exercise 4\n");
    circulo(4);

    return 0;
}