//programe to convert binary to decimal
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
    int bin,dec=0,r,i,b=1;
    printf("Enter a binary number:");
    scanf("%d",&bin);
    for(i=0;bin>0;i++)
    {
        r=bin%10;
        dec+=r*b;
        bin/=10;
        b*=2;
    }
    printf("Equivalnt decimal value is: %d",dec);
    getch();
} 