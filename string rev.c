#include<stdio.h>
#include<string.h>
int main()
{
char st[30],i,n=0;
printf("enter string:\n");
fgets(st,sizeof(st),stdin);

printf("entered string is:\n%s",st);

n=strlen(st);

printf("the reversed string is :\n");
for(i=n-1;i>=0;i--)
printf("%c\t",st[i]);

return 0;
}
