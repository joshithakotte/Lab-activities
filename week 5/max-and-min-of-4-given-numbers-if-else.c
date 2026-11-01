/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a, b, c, d, max, min;
    printf("enter four numbers:");
    scanf("%d%d%d%d", &a, &b, &c, &d);
    max = a;
    min = a;
    if (b>max)
    max = b;
    else
    max = max;
    if (c>max)
    max = c;
    else
    max = max;
    if (d>max)
    max = d;
    else
    max = max;
    if (b<min)
    min = b;
    else
    min = min;
    if (c<min)
    min = c;
    else
    min = min;
    if (d<min)
    min = d;
    else
    min = min;
    printf("maximum = %d\n", max);
    printf("minimum = %d\n", min);
    return 0;
}
