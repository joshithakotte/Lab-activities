/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float a, b;
    int choice;
    printf("enter two numbers:");
    scanf("%f%f", &a, &b);
    printf("\n calculator menu\n");
    printf("1. addition\n");
    printf("2. subtraction\n");
    printf("3. multiplication\n");
    printf("4. division\n");
    printf("enter your choice:");
    scanf("%d", &choice);
    switch (choice)
    {
        case 1:
        printf("result = %.2f\n, a+b");
        break;
        case 2:
        printf("result = %.2f\n", a-b);
        break;
        printf("result = %.2f\n", a*b);
        break;
        case 4:
        if (b==0)
        printf("division by zero is not possible\n", a/b);
        break;
        default:
        printf("invalid option\n");
        
    }
    
    return 0;
}
