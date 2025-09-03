#include <stdio.h>

int main() {
int i,n=0,arr[50];
printf("enter the size ");
scanf("%d",&n);
printf("enter the no \n");
  for (i = 1; i <= n; i++) {
    scanf("%d", &arr[i]);
  }
 printf("the array value are :\n");
  for (i = 1; i <= n; i++){
   printf("%d\t", arr[i]);
   }
  return 0;
}
