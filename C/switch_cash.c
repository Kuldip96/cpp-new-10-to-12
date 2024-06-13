#include<stdio.h>
int number;
char name[50];
void getdata(){
    printf("Enter the number:");
    scanf("%d",&number);
    printf("Enter the name:");
   
    scanf("%s",name);
}


int main(){
  int n;
    do
    {
    printf("1 : getdata\n");
    printf("2 : print data\n");

    printf("select number:");
    scanf("%d",&n);

    switch (n)
    {
        case 1:
        getdata();
        break;

        case 2:
        printf("Select 2:");
        break;

        default:
        printf("number not match:");

    }
    } while (n==3);
    

    for(int i=1;i<=10;i++){
        if(i==5){
            continue;
        }
        printf("%d\t",i);
    }

    return 0;
}