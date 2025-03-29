#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int row=1;row<=n;row++){
        for(int col=1;col<=n;col++){
            if(row==2 &&col==2){
                printf("\t");
            }
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}





