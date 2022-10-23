//programe to count vowel,consonant,space in a string
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
     char str1[40];
     int i,vowel=0,consonant=0,space=0;
     printf("Enter your string:");
     gets(str1);
    for(i=0;str1[i]!='\0';i++)
    {
        if(str1[i]=='a'||str1[i]=='e'||str1[i]=="i"||str1[i]=='o'||str1[i]=='u'||str1[i]=='A'||str1[i]=='E'||str1[i]=="I"||str1[i]=='O'||str1[i]=='U')
        {
            vowel++;
        }
        if(str1[i]==' ')
        {
            space++;
        }
    }
    consonant=(strlen(str1)-(vowel+space));
    printf("Vowel=%d\nConsonant=%d\nSpace=%d",vowel,consonant,space);
    getch();
}