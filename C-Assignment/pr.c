#include<stdio.h>
#include<string.h>
void main()
{
    char str[4],str2[4],temp;
    int i=0;
    gets(str);
    strcpy(str2,str);
    do{
        temp=str[i];
        str[i]=str[i+1];
        str[i+1]=temp;
        puts(str);
        printf("\n");
        i++;
    }
    while(strcmp(str,str2)!=0);
}