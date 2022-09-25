#include<stdio.h>
#include<conio.h>
void main()
{
    int range,x=0,y=1,z;
    printf("Programme to print Fibonacci Series upto given range\n");
    printf("-----------------------------------------------------\n");
    printf("Enter the range: ");
    scanf("%d",&range);

    do
    {
        printf("%d ",x);
        z=x+y;
        y=x;
        x=z;
    }while(x<=range);
    getch();
}