// Your code here...
#include<stdio.h>
 void paliondrome(int arr[],int n);
 int main(){
     int n;
     scanf("%d",&n);
     int arr[n];
     for(int i=0;i<n;i++){
         scanf("%d",&arr[i]);
     }
     paliondrome(arr,n);
     return 0;
 }
 void paliondrome(int arr[],int n){
     for(int i=0,j=n-1;i<j;i++,j--){
         if(arr[i]!=arr[j]){
             printf("NO");
             return;
         }
     }
     printf("YES");
 }
 