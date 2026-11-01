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
float a, b, c, d;
float root1, root2, real, imaginary;
printf("enter coefficients a, b, c:");
scanf("%f%f%f",&a, &b, &c);
if (a==0)
{
    printf("this is not a quadratic equation.\n");
    return 0;
}
if (d>0)
{
    root1 = (-b+sqrt(d))/(2*a);
  root2 = (-b-sqrt(d))/(2*a);
    printf("roots are real and distinct.\n");
    printf("root1 = %.2f\n", root1);
    printf("root2 = %.2f\n", root2);
}
else if (d==0)
{
    root1 = -b/(2*a);
    printf("roots are real and equal.\n:");
    printf("root1 = root2 = %.2f\n", root1);
}
else
{
    real = -b/(2*a);
    imaginary = sqrt(-d)/(2*a);
    printf("roots are complex.\n",real, imaginary);
    printf("root1 = %.2f+%2fi\n",real, imaginary);
    printf("root2 = %.2f-%.2fi\n", real, imaginary);
}
    return 0;

    
}
    
