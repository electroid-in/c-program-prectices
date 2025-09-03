#include<stdio.h>
int main()
{
int n=0,i,arr[100],cpy[100];

printf("enter size of the array:\n");
scanf("%d",&n);

printf("enter the number:\n");
for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
printf("number entered:\narr[]=\t");

for(i=0;i<n;i++){
    printf("%d\t",arr[i]);
}
 printf("\ncopyed array is:\n cpy[]=\t");

for(i=0;i<n;i++){
        cpy[i]=arr[i];
    printf("%d\t",cpy[i]);
}
    return 0;
}
