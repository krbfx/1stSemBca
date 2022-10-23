//programe to search a value in an array(liner search)
#include<stdio.h>
#include<conio.h>
void main()
{
    int list[50],limit,i,count=0,key;
    printf("How many numbers you want to enter?\n");
    scanf("%d",&limit);
    for(i=0;i<limit;i++)
    {
        printf("Enter no %d:",i+1);
        scanf("%d",&list[i]);
    }
    printf("Which value you want to search?\n");
    scanf("%d",&key);
    for(i=0;i<limit;i++)//liner search
    {
        if(list[i]==key)
        {
            count++;
        }
    }
    if(count>0)
    {
        printf("%d found %d times.",key,count);
    }
    else{
        printf("%d not found.",key);
    }
    getch();
}