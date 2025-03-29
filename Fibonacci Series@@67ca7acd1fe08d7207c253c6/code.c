// #include<stdio.h>
// int fibonacciSeries(int N);
// int main(){
//     int N;
//     scanf("%d",&N);
//     if(N<=0){
//         printf("Invalid input\n");
//         return 0;
//     }
//     for(int i=0;i<N;i++){
//         printf("%d\t",fibonacciSeries(i));
//     }
//     return 0;
// }
int fibonacciSeries(int N){
    if(N==1){
        return 0;
    }
    else if(N==0){
        return 0;
    }
    for(int i=0;i<N;i++){
        printf("%d\t",fibonacciSeries(i));
    }
    return fibonacciSeries(n-1)+fibonacciSeries(n-2);
    
}