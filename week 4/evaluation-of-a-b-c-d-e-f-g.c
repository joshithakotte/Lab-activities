/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int A, B, C, D, E, F, G, result;
    printf("enter the values of A, B, C, D, E, F, G:");
    scanf("%d%d%d%d%d%d%d", &A, &B, &C, &D, &E, &F, &G);
    result = A+B+C+(D*E)+F*G;
    printf("result = %d\n", result);

    return 0;
}
