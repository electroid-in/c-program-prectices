#include<stdio.h>
#include<string.h>
int main()
{
char st[30];
int c,i,n=0,count=0;
printf("enter string:\n");
fgets(st,sizeof(st),stdin);

printf("entered string is:\n%s\n",st);

n=strlen(st);

for(i=0;i<n;i++){
if(isspace(st[i]))
count++;
}
printf("the total words in string :\n");
printf("%d\t",count);

return 0;
}
