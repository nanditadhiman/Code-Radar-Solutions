#include<stdio.h>
void printArray(char arr[100]){
    for(int i=0;i<100;i++){
        printf("%c",arr[i]);
    }
}
void selectionSort(arr,int n){
    for(int i=0;i<100/2;i++){
        int temp=arr[i];
        arr[i]=arr[100-i-1];
        arr[100-i-1]=temp;
    }
}