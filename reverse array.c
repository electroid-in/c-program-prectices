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
printf("number entered:\n");

for(i=0;i<n;i++){
    printf("%d\t",arr[i]);
}
printf("\nNumbers in reverse order:\n");
    for(j = n - 1; j >= 0; j--) {
        printf("%d\t", arr[j]);
    }
    return 0;
}
