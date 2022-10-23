//sum of individual digit of any positive number
#include<stdio.h>
#include<conio.h>
void main()
{
    int num,rem,sum=0,i;
    printf("Enter any positve integer number:");
    scanf("%d",&num);
    if(num>0)
    {
        for(i=0;num>0;i++)
        {
            rem=num%10;
            sum+=rem;
            num/=10;
        }
        printf("Sum of individual digit of your entered number is %d",sum);

    }
    else
    {
        printf("You have entered a negetive number.");
    }
    getch();
}