//programe to revserse a string
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    char str[50],str1[50];
    int i,len;
    
    printf("Enter your sring:");
    gets(str);
    len = strlen(str);
    for(i=0;len>=0;i++)
    {
        str1[i]=str[len-1];
        len--;
    }
    str1[i]='\0';
    printf("Reverse of your string is:");
    puts(str1);
    getch();
}