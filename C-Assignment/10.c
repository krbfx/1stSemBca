//Programe to check string is palandrome or not
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
     char str1[40],str2[40];
     int i,len;
     printf("Enter your string:");
     gets(str1);
     len = strlen(str1);
    for(i=0;len>=0;i++)
    {
        str2[i]=str1[len-1];
        len--;
    }
    str2[i]='\0';
     if(strcmp(str1,str2)==0)
     {
        printf("Your string is Palandrome.");
     }else{
        printf("Your string is not Palandrome.");
     }
     getch();
}