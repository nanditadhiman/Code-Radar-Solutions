#include<stdio.h>
int fibonacciSeries(int n);
int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("%d",fibonacciSeries(i));
    }
    return 0;
}
int fibonacciSeries(int n){
    if(n==1){
        return 1;
    }
    else if(n==0){
        return 0;
    }    
    return fibonacciSeries(n-1)+fiboncciSeries(n-2);
}