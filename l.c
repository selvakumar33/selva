#include<stdio.h>
void main()
{
char ch;
printf("the char is");
scanf("%c",&ch);
if((ch>='a'&& ch<='z')||(ch>='A'&&ch<='Z'))
{
printf("the char is alphabet");
}
else
{
printf("the char is not alphabet");
}
}
