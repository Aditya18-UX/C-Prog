#include<stdio.h>
int main () {
    int arr[] = {37,954,26,47,782,49,74,61,49,50,39,27};
    int n = sizeof(arr)/4;
    for(int i=0;i<n;i++) {
        printf("%d  ",arr[i]);
    }
printf("\n");
int brr[n];
for(int i = 0;i<n;i++) {
    brr[i]=arr[n-1-i];
}
for(int i=0;i<n;i++) {
    printf("%d  ",brr[i]);
}
printf("\n");
}