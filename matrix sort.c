#include<stdio.h>
int main()
{
int m=0,n=0,k=0,i,j,x,y,arr[100][100],temp,s[50];

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

        for(i=0;i< m;i++){
        for(j=0;j<n;j++){
               s[k++] = arr[i][j];
        }
    }
        for(i=0;i<k-1;i++){
        for(j=i+1;j<k;j++){
            if(s[i]<s[j]){
                temp=s[i];
                s[i]=s[j];
                s[j]=temp;
                    }
            }
        }
    printf("\nthe sorted  array  is :\n");
        for (i=0;i<=k-1;i++){
            printf("%d\t", s[i]);
        }
return 0;
}
