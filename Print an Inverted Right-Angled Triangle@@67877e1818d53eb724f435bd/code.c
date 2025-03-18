#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    int i=0;
    do{
        i=i+1;
        printf("*\n",i);
        printf("*\n",i-1);
    }while(i<N);
    return 0;
}