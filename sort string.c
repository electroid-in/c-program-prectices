#include<stdio.h>
#include<string.h>
int main()
{
char st[30];
int i,j,n=0,temp=0;
printf("enter string:\n");
fgets(st,sizeof(st),stdin);

printf("entered string is:\n%s",st);

n=strlen(st);
for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(st[i]>st[j]){
                temp=st[i];
                st[i]=st[j];
                st[j]=temp;
            }
        }
   }
printf("\nthe sorted  array  is :\n");
        for (i=0;i<=n-1;i++){
            printf("%c\t", st[i]);
        }
return 0;
}
