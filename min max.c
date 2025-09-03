#include<stdio.h>
int main()
{
int n=0,i,j,arr[100],max,min;

printf("enter size of the array:\n");
scanf("%d",&n);

printf("enter the number:\n");
for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
printf("number entered:\n");

for(i=0;i<n;i++){
    printf("%d\t",arr[i]);
}
max=arr[0];
min=arr[0];
for(i=0;i<n;i++){
    if(max<arr[i])
        max=arr[i];
    else if(min>arr[i])
        min=arr[i];
}
printf("\nmin=%d \\ max=%d\n",min,max);
    return 0;
}
