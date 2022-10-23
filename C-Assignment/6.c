//sort an array via bubble soting
#include<stdio.h>
#include<conio.h>
void output(int [],int);
void main()
{
    int list[50],limit,i,j,temp;
    printf("How many numbers you want to enter?\n");
    scanf("%d",&limit);
    for(i=0;i<limit;i++)
    {
        printf("Enter no %d:",i+1);
        scanf("%d",&list[i]);
    }
    printf("Before sorting the array:\n");
    output(list,limit);
    for(i=0;i<limit-1;i++)//bubble sorting
    {
        for(j=i+1;j<limit;j++)
        {
            if(list[i]>list[j])
            {
                temp=list[i];
                list[i]=list[j];
                list[j]=temp;
            }
        }
    }
    printf("\nAfter sorting the array:\n");

    output(list,limit);
    getch();
}
void output(int a[],int l)
{
    int i;
    for(i=0;i<l;i++)
    {
        printf("%d ",a[i]);
    }
}