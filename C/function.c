#include<stdio.h>


void devide(int a,int b){
    printf("%d\n",a/b);
}

int subtrec(int a,int b){
    int total;
    total =a-b;
    return total;
}

int main(){

    devide(50,10);
    
    int total;
    total=subtrec(50,20);
    printf("%d",total);

    return 0;
}