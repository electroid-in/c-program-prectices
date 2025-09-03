#include<stdio.h>
int main()
{
int l=0,m=0,n=0,i,j,k,arr[20][100][100];

printf("enter size of block ,row and column of the array:\n");
scanf("%d%d%d",&l,&m,&n);

printf("enter the number:\n");
for(i=0;i<l;i++){
    for(j=0;j<m;j++){
        for(k=0;k<n;k++){
        scanf("%d",&arr[i][j][k]);
        }
    }
}
    printf("entered matrix is:\n");
        for(i=0;i<l;i++){
    printf("block %d:\n",i+1);
        for(j=0;j<m;j++){
            for(k=0;k<n;k++){
        printf("%d \t",arr[i][j][k]);
        }
        printf("\n");
    }
    printf("\n");
}
return 0;
}
