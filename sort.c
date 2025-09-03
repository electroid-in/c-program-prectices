#include<stdio.h>
int main()
{
int n=0,i,j,arr[100],temp;

printf("enter size of the array:\n");
scanf("%d",&n);

printf("enter the number:\n");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
        }
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(arr[i]<arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
                    }
            }
        }
    printf("\nthe sorted  array  is :\n");
        for (i=0;i<=n-1;i++){
            printf("%d\t", arr[i]);
        }
    return 0;
}
