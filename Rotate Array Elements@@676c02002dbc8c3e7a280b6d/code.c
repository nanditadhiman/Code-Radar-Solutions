#include<stdio.h>
void reverse(int arr[],int n);
int main(){
    int arr[n];
    int n;
    scanf("%d",&n);
    return 0;
}
void reverse(int arr[],int n){
    if(int i=0;i<n/2;i++){
        int firstvalue=arr[i];
        int secondvalue=arr[n-i-1];
        arr[i]=secondvalue;
        arr[n-i-1]=firstvalue;
    }
}