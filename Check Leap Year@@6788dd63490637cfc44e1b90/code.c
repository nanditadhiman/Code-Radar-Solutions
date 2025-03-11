#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    
    printf("Leap Year");
    if(a%400!=0){
        printf("Not a Leap Year");
    }
    return 0;

}