#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i,brkt,sum=0,j;
    printf("Programme to find sum of this series 1+(1+2)+(1+2+3)+...+(1+2+...+n\n");
    printf("--------------------------------------------------------------------\n");
    printf("Enter the n: ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        brkt=0;
        for(j=1;j<=i;j++)
        {
            brkt+=j;
        }
        sum+=brkt;
    }
    printf("The sum of the given series is %d",sum);
    getch();
}   