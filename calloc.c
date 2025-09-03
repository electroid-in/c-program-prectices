#include<stdio.h>
int main()
{
int n=0,m=0,i,j,arr[100];
int *ptr= (int*)calloc(n,sizeof(int));
printf("enter size of the array:\n");
scanf("%d",&n);

printf("enter the number:\n");
for(i=0;i<n;i++){
    scanf("%d",(ptr+i));
}
printf("array assigned using calloc:\n");
for(i=0;i<n;i++){
printf("%d ",*(ptr+i));
}
return 0;
}
