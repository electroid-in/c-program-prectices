 #include <stdio.h>

int sort(int arr[],int n) {

for(int i=0;i<n-1;i++) {
        for(int j=i+1;j<n;j++){
            if(arr[i] > arr[j]){           //a>b
                arr[i] = arr[i]+arr[j];       //a=a+b
                arr[j] = arr[i]-arr[j];     //b=a-b
                arr[i] = arr[i]-arr[j];       //a=a-b
            }
        }
    }
}
int main()
{
    int arr[50],n,i;
    printf("enter a size:\n");
    scanf("%d",&n);
    printf("enter the number:\n");
        for(i=0;i<n;i++){
            scanf("%d",&arr[i]);
}
sort(arr,n);

    printf("\nthe sorted  array  is :\n");
        for (i=0;i<=n-1;i++){
            printf("%d\t", arr[i]);
        }
}
