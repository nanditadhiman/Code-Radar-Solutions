#include<stdio.h>
int fibonacciSeries(int N);
int main(){
    int N;
    scanf("%d",&N);
    if(n<=0){
        printf("Invalid input\n");
    }
    for(int i=0;i<n;i++){
        printf("%d\t",fibonacciSeries(i));
    }
    return 0;
}
int fibonacciSeries(int N){
    if(n==1){
        return 1;
    }
    else if(n==0){
        return 0;
    }
    return fibonacciSeries(n-1) + fibonacciSeries(n-2);
}