#include <stdio.h>

int prime(int n) {
    int count=0,i;
    for(i=1;i<=n;i++){
    if(n%i==0){
        count++;
    }}
    return count;
    }

int main()
{
    int num;
    printf("enter a number:\n");
    scanf("%d",&num);

if (prime(num)==2){
    printf("%d is a prime number.\n", num);
}
else{
    printf("%d is not a prime number.\n", num);
}
return 0;

}
