#include<stdio.h>
int main()
{
int n=0,i,j,arr[100];

printf("enter size of the array:\n");
scanf("%d",&n);

printf("enter the number:\n");
for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
printf("number entered: normal exexution:\n");

for(i=0;i<n;i++){
    printf("%d\t",arr[i]);
}
int*ptr=arr;
printf("\narray print using pointer :\n");
    for(i=0;i<n;i++){
       printf("%d\t",*(ptr+i));
    }
    return 0;
}
