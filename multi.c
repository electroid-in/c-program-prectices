#include<stdio.h>
int main()
{
int i,n=0;
printf("enter the no ");
scanf("%d",&n);

for(i=1;i<=10;++i)
{
printf("%d x %d =%d\n ",i,n,i*n);
}
return 0;
}

