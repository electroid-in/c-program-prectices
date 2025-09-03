#include<stdio.h>
int main()
{
int m=0,n=0,i,j,arr[100][100],cpy[50][50];

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
    printf("copied  matrix is:\n");
    for(i=0;i< m;i++){
        for(j=0;j<n;j++){
        cpy[i][j]=arr[i][j];

printf("%d\t",cpy[i][j]);
       }
       printf("\n");
       }
return 0;
}
