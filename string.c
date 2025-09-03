#include<stdio.h>
#include<string.h>
int main()
{
char st[30];
printf("enter string:\n");
fgets(st,sizeof(st),stdin);

printf("entered string is:\n %s ",st);

return 0;
}
