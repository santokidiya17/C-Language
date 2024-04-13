#include<stdio.h>
void main(){
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    if(n%2==0){
        printf("Given number is Even");
    }else{
        printf("Given number is odd");
    }
}