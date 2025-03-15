#include<stdio.h>
int main(){
    int a,b,c;
    scanf("%d %d ",&a,&b);
    if(c==a+b){
        printf("%d",a+b);
    }
    else if(c==a-b){
        printf("%d",a-b);
    }
    else if(c==a*b){
        printf("%d",a*b);
    }
    else if(c==a/b){
        printf("%d",a/b);
    }
    return 0;
}
