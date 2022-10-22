//programe to sort names in alphabetical order
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    char names[50][50],temp[50];
    int limit,i,j;
    printf("How many names you want to input? ");
    scanf("%d",&limit);
    
    for(i=0;i<limit;i++)
    {
        printf("Name %d:",i+1);
        scanf("%s",names[i]);
    }
    for(i=0;i<limit-1;i++)
    {
        for(j=i+1;j<limit;j++)
        {
            if(strcmp(names[i],names[j])>0)
            {
               strcpy(temp,names[i]);
                strcpy(names[i],names[j]);
                strcpy(names[j],temp);
            }
        }
    }
    printf("After sorting in alphabetical Order:\n");
    for(i=0;i<limit;i++)
    {
        puts(names[i]);
    }
}