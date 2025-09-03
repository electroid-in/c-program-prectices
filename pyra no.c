#include<stdio.h>
int main()
{
int i,j,k,n=5;
int spc=n+4-1;
for(i=1;i<=n;i++){
    for (k=spc;k>=1;k--){
        printf(" ");
    }
    for(j=1;j<=i;j++){
        printf("%d ",j);
 }
 printf("\n");
 spc--;
 }

return 0;
}
