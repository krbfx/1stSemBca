//evalute s=1+(1+2)+(1+2+3)...(1+2+3...+n)
#include<stdio.h>
#include<conio.h>
void main()
{
    int num,i,j,sum=0,result=0;
    printf("Enter the n of the seris:");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        sum=0;
        for(j=1;j<=i;j++)
        {
            sum+=j;
        }
        result+=sum;
    }
    printf("The evaluated result is %d",result);
    getch();
}