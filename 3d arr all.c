#include<stdio.h>

int main() {
    int l=0,m=0,n=0,i,j,k,x=0;
    int arr[20][100][100],copy[20][100][100],Ar[200];  // Flattened array
    int temp,min,max,sum=0;

    printf("Enter size of row and column of the array:\n");
    scanf("%d%d%d",&l,&m,&n);

    printf("Enter the numbers:\n");
    for(i=0;i<l;i++){
        for(j=0;j<m;j++){
            for(k=0;k<n;k++){
                scanf("%d",&arr[i][j][k]);
            }
        }
    }
    printf("\nEntered matrix is:\n");
    for(i=0;i<l;i++){
        printf("Block %d:\n",i+1);
        for(j=0;j<m;j++){
            for(k=0;k<n; k++){
                printf("%d\t",arr[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }

    // Copying the array
    for(i=0;i<l;i++){
        for(j=0;j<m;j++){
            for(k=0;k<n;k++){
                copy[i][j][k]= arr[i][j][k];
            }
        }
    }
    for(i=0;i<l;i++){
        for(j=0;j<m;j++){
            for(k=0;k<n;k++){
                Ar[x++]=arr[i][j][k];
            }
        }
    }

    // Sorting in descending order
    for(i=0;i<x-1;i++) {
        for(j=i+1;j<x;j++) {
            if(Ar[i] < Ar[j]) {
                temp= Ar[i];
                Ar[i]=Ar[j];
                Ar[j]= temp;
            }
        }
    }

    // Finding min and max
    min=max=Ar[0];
    for(i=1;i<x;i++){
        if(Ar[i]< min)
            min= Ar[i];
        if(Ar[i]> max)
            max=Ar[i];

    }

    //Finding Sum
    for(i=1;i<x;i++){
        sum=sum+Ar[i];
    }

    // Print copied array
    printf("\nCopied matrix is:\n");
    for(i=0;i<l;i++){
        printf("Block %d:\n",i+1);
        for(j=0;j<m;j++) {
            for(k=0;k<n;k++) {
                printf("%d\t",copy[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }
    // Print sorted array
    printf("\nSorted  Array:\n");
    for(i=0;i<x;i++) {
        printf("%d\t", Ar[i]);
    }
    printf("\n\nMin= %d", min);
    printf("\nMax= %d\n", max);
    printf("\nSum= %d\t",sum);

    return 0;
}

