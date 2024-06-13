#include<stdio.h>

struct  Students
{
    int age;
    char name[50];

};
int main(){

    struct Students st1[3];

    for(int i=0;i<3;i++){
        printf("Enter the age:");
        scanf("%d",&st1[i].age);
        printf("Enter the name:");
        scanf("%s",st1[i].name);
    }
    for(int i=0;i<3;i++){
        printf("%d",st1[i].age);
       
        printf("%s",st1[i].name);
       
    }

    return 0;
}