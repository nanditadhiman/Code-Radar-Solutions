#include<stdio.h>
void printArray(char arr[100]){
    for(int i=0;i<n;i++){
        printf("%c",arr[i]);
    }
}
void selectionSort(char arr[100]){
    for(int i=0;i<n/2;i++){
        int temp=arr[i];
        arr[i]=arr[n-i-1];
        arr[n-i-1]=temp;
    }
}