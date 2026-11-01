/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <math.h>
int main()
{
float p, r, t, amount, ci;
printf("enter principal amount:");
scanf("%f", &r);
printf("enter time period in years:");
scanf("%f", &t);
amount = p*pow(1+r/100,t);
ci = amount-p;
printf("compound interest = %.2f\n", ci);
printf("total amount = %.2f\n", amount);


    return 0;
}
