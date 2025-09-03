#include<stdio.h>
int main()
{
int n,a,b,c;

printf("enter 2 number \n");
scanf("%d%d",&a,&b);

printf("-------------------------------\n");

printf("enter the operation:\n +\n -\n *\n /\n");
scanf(" %c",&n);

printf("-------------------------------\n");
switch(n){
    case '+':
        c=a+b;
        printf("%d+%d=%d",a,b,c);
        break;
    case '-':
        c=a-b;
        printf("%d-%d=%d",a,b,c);
        break;
    case '*':
        c=a*b;
        printf("%dx%d=%d",a,b,c);
        break;
    case '/':
        c=a/b;
        printf("%d/%d=%d",a,b,c);
        break;
}

return 0;
}
