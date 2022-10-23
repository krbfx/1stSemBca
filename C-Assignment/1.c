//factorial of any number
#include<stdio.h>
#include<conio.h>
int factorial(int);
void main()
{
    int num,result;
    printf("Enter an Integer number:");
    scanf("%d",&num);
    result=factorial(num);
    printf("Factorial of %d is %d",num,result);
    getch();
}
int factorial(int n)
{
    if(n==0)
    return 1;
    else
    return(n*factorial(n-1));
}