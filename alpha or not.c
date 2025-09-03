#include<stdio.h>
int main()
{
char n;

printf("enter the charecter ");
scanf("%s",&n);
if(n>='A'&& n<='Z'|| n>='a' && n<='z'){
printf("given is a Alphabet");
}
else
{
printf("given is not a Alphabet");
}
return 0;
}
