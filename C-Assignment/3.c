//programe to check a number is prime or not
#include<stdio.h>
#include<conio.h>
void main()
{
    int num,i,flag=0;
    printf("Enter a number:");
    scanf("%d",&num);
    if(num==0||num==1)
    {
        flag=1;
    }
    for(i=2;i<num/2;i++)
    {
        if(num%i==0)
        {
            flag=10;
        }
    }
    if(flag==0)
    {
        printf("%d is a prime number.",num);
    }
    else{
        printf("%d is not a prime number.",num);
    }
    getch();
}