//Print fibonacci series within given range
#include<stdio.h>
#include<conio.h>
void main()
{
    int x=0,y=1,z,range;
    printf("Enter The Range for fibonacci series:");
    scanf("%d",&range);
    do{
        printf("%d ",x);
        z=x+y;
        y=x;
        x=z;
    }while(x<=range);
    getch();
}