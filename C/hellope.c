#include<stdio.h>

int main(){
    
    char name[50]={'H','E','L','L','O'};

    for(int i=0;i<5;i++){
        for(int j=0;j<=i;j++){
            printf("%c  ",name[j]);
        }
        printf("\n");
    }
    
    
    return 0;

}