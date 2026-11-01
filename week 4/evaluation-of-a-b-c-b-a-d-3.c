/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
int A, B, C, D;
float result;
printf("Enter values of A, B, C, D:");
scanf("%d%d%d%d", &A, &B, &C, &D);
result = (float)A/B*C-B+(float)A*D/3;
printf("Result = %.2f\n", result);

    

    return 0;
}
