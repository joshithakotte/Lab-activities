/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float C, F;
    printf("enter the temperature in C:");
    scanf("%f", &C);
    F = (C*9/5)+32;
    printf("temperature in F = %.2f\n", F);
    printf("enter the temperature in F:");
    scanf("%f", &F);
    C = (F-32)*5/9;
    printf("temperature in C = %.2f\n", C);
    return 0;
}
