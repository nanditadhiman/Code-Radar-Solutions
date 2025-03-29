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
#include<stdio.h>
int fibonacciSeries(int N);
int a=0,b=1;
printf("%d",a);
for(int i=0;i<n-1;i++){
    printf("%d ",b);
    int next=a+b;
    a=b;
    b=next;
    return 0;
}
