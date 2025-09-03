#include<stdio.h>
int main()
{
FILE *fptr;
fptr=fopen("abc.txt","w"); //create file
fprintf(fptr,"Hello!");
fclose(fptr);

fptr=fopen("abc.txt","a");
fprintf(fptr,"\nworld");
fclose(fptr);
fptr=fopen("abc.txt","r");

char st[50];
while(fgets(st,50,fptr)){
printf("%s",st);
}

return 0;
}
