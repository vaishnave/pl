#include<stdio.h>
#include<string.h>
void main()
{
char ch[20],rev;
int i=0,j;
printf("enter a string");
scanf("%s",&ch);
j=strlen(ch)-1;
while(i<j)
{
rev=str[i];
str[i]=str[j];
str[j]=rev;
i++;
j--;
}
printf("reverse string is:%s",rev);
}
