// program to find biggest number among three number
#include <stdio.h>
#include <conio.h>
int big(int,int,int);
void main()
{
    int a,b,c,result;
    printf("Enter Three Integer Numbers:");
    scanf("%d%d%d",&a,&b,&c);
    result=big(a,b,c);
    printf("The biggest among these three number is %d",result);
    getch();
}
int big(int a,int b,int c)
{
    if (a > b)
    {
        if (a > c)
        {
            return (a);
        }
        else
        {
            return (c);
        }
    }
    else
    {
        if (b > c)
        {
            return (b);
        }
        else
        {
            return (c);
        }
    }
}