#include "multInt.c"
#include "mdc.c"
#include "fib.c"

int main(){
   int a,b,r1,r2,r3,r4, 
       c1=0, c2=0;
   float f, f1, f2, f3;
    
   printf ("Introduza dois numeros para input das funcoes de multiplicacao: ");
   scanf ("%d", &a); scanf ("%f", &f);
   f1 = multInt1 (a,f);
   f2 = multInt2 (a,f);
   f3 = multInt3 (a,f, &c1);
   printf ("Resultados das multiplicacoes: %f, %f, %f (%d)\n", f1, f2, f3, c1);
   
   printf ("Introduza dois numeros para input das funcoes de mdc: ");
   scanf ("%d", &a); scanf ("%d", &b);

   r1 = mdc1 (a,b);
   r2 = mdc2 (a,b);
   r3 = mdc3 (a,b, &c1);
   r4 = mdc4 (a,b, &c2);
   printf ("Resultados do mdc: %d, %d, %d (%d), %d (%d)\n", r1, r2, r3, c1, r4, c2);
   
   printf ("Introduza um numero para calcular o fib: ");
   scanf ("%d", &a);
   printf ("FastFib (%d) = %d \n", a, fastfib (a));
   printf ("Fib (%d) = %d \n", a, fib (a));

   return 0;
}
