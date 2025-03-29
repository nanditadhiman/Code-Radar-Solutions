#include<stdio.h>
void reverse(int arr[],int n);
void printarr(int arr[],int n);
int main(){
    int n;
    scanf("%d",&n);
    reverse(arr,n);
    printarr(arr,n);
    return 0;
}
void printarr(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d\n",arr[i]);
    }
}
void reverse(int arr[],int n){
    if(int i=0;i<n/2;i++){
        int temp=arr[i];
        arr[i]=arr[n-i-1];
        arr[n-i-1]=temp;
    }
}