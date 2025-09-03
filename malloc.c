#include<stdio.h>
int main()
{
int n=0,m=0,i,j,arr[100];
int *ptr= (int*)malloc(n*(sizeof(int)));
printf("enter size of the array:\n");
scanf("%d",&n);

printf("enter the number:\n");
for(i=0;i<n;i++){
    scanf("%d",(ptr+i));
}
printf("array assigned using malloc:\n");
for(i=0;i<n;i++){
printf("%d ",*(ptr+i));
}


printf("\nenter size to be realloc the array:\n");
scanf("%d",&m);

ptr =(int *)realloc(ptr,m*(sizeof(int)));

printf("\n enter the number:\n");
    for(i=n;i<m;i++){
    scanf("%d",(ptr+i));
    }
printf("\n array assigned using realloc:\n");
    for(i=0;i<m;i++){
        printf("%d ",*(ptr+i));
        }
        free(ptr);
return 0;
}
