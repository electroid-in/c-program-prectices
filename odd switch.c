#include<stdio.h>
int main()
{
char n;

printf("enter the charecter ");
scanf("%s",&n);

switch(n%2){
    case 0:
        printf("even");
        break;
    case 1:
        printf("odd");
        break;
}


return 0;
}
