#include<stdio.h>
int main()
{
int m=0,n=0,i,j,arr[100][100];

printf("enter size of row and column of the array:\n");
scanf("%d%d",&m,&n);

printf("enter the number:\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
        scanf("%d",&arr[i][j]);
        }
    }
    printf("reversed matrix is:\n");
    for(i=m-1;i>=0;i--){
        for(j=n-1;j>=0;j--){
       printf("%d\t",arr[i][j]);
       }
       printf("\n");
       }
return 0;
}
