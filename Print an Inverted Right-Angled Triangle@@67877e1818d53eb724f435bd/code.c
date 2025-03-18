#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    int i;
    for(i=0;i<N;i++){
        printf("* \n",i);
        printf("* ",i-1);
    }
    return 0;
}