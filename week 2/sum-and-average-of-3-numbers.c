/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
float a, b, c, sum, average;
printf("enter three numbers:");
scanf("%f%f%f", &a, &b, &c);
sum = a+b+c;
average = sum/3;
printf("sum = %.2f\n", sum);
printf("average = %.2f\n", average);
    return 0;
}
