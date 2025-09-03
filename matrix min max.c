#include<stdio.h>
int main()
{
int m=0,n=0,i,j,arr[100][100],max,min;

printf("enter size of row and column of the array:\n");
scanf("%d%d",&m,&n);

printf("enter the number:\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
        scanf("%d",&arr[i][j]);
        }
    }
    printf("entered matrix is:\n");
    for(i=0;i< m;i++){
        for(j=0;j<n;j++){
       printf("%d\t",arr[i][j]);
       }
       printf("\n");
       }
max=arr[0][0];
min=arr[0][0];
for(i=0;i<m;i++){
for(j=0;j<n;j++){
    if(max<arr[i][j])
        max=arr[i][j];
    else if(min>arr[i][j])
        min=arr[i][j];
}}
printf("\nmin=%d \\ max=%d\n",min,max);
return 0;
}
