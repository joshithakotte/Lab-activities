/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
float p, r, t, si;
printf("enter principal amount:");
scanf("%f", &p);
printf("enter the rate of interest:");
scanf("%f", &r);
printf("enter the time period in years:");
scanf("%f", &t);
si = (p*r*t)/100;
printf("simple interest = %.2f\n", si);

return 0;
}
