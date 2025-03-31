#include<stdio.h>
void array1(int arr[],int n);
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    array1(arr,n);
    return 0;
}
void array1(int arr[],int n){
    int c=0;
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]<2){
            return 0;
        }
        if(arr[i]%2==0){
            c++;
        }
        if(c==0){
            count+=1;
        }
        else{
            return 0;
        }
    }
    printf("%d",count);
}