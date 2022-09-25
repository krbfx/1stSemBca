#include<stdio.h>
#include<conio.h>
void main()
{
    int num,i,rem,sum=0;
    printf("Programme to check super number\n");
    printf("-------------------------------\n");
    printf("Enter the number: ");
    scanf("%d",&num);
    for(i=1;i<=num/2;i++)
    {
        rem=num%i;
        if(rem==0)
        {
            sum+=i;
        }
    }
    if(sum==num)
    {
        printf("%d is a super number",num);
    }else
    {
        printf("%d is not a super number",num);
    }
    getch();
}