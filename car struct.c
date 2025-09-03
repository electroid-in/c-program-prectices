#include<stdio.h>

struct Car
{
char brand[50];
int year;
};
int main()
{
char c[50];
struct Car car1={"toyota",2020};
struct Car car2={"benz",2021};
struct Car car3={"bmw",2020};
struct Car car4={"bently",2022};
printf("enter brand:");
        scanf("%s",c);
    if(strcmp(c,"toyota")==0){
        printf("brand :%s\n",car1.brand);
        printf("year:%d",car1.year);
    }else if (strcmp(c,"benz")==0){
        printf("Brand: %s\n",car2.brand);
        printf("Year:%d\n",car2.year);
    } else if (strcmp(c,"bmw")==0){
        printf("Brand:%s\n",car3.brand);
        printf("Year:%d\n",car3.year);
    } else if (strcmp(c,"bently") == 0) {
        printf("Brand:%s\n",car4.brand);
        printf("Year:%d\n",car4.year);
    } else {
        printf("Brand not found.\n");
    }
return 0;
}
