#include <stdio.h>

void fib(int n) {
    int a=0,b=1,c,i;
    for(i=0;i<n;i++) {
        if(i<=1)
            c=i;
        else{
            c= a+b;
            a=b;
            b=c;
        }
        printf("%d ",c);
    }
}
int main() {
    int n;
    printf("Enter the number of Fibonacci : ");
    scanf("%d",&n);
    printf("Fibonacci series:\n");
    fib(n);

    return 0;
}
