//GCD of two numbers using recursion
#include<stdio.h>
#include<conio.h>
int gcd(int,int);
void main()
{
    int num1,num2,result,temp;
    printf("Enter two positive integer number:");
    scanf("%d%d",&num1,&num2);
    if(num2>num1)
    {
        temp=num2;
        num2=num1;
        num1=temp;
    }
    result = gcd(num1,num2);
    printf("GCD = %d",result);
    getch();
}
int gcd(int n1,int n2)
{
    if(n2==0)
    {
        return (n1);
    }else{
        return gcd(n2,n1%n2);
    }
}