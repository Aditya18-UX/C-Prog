#include<stdio.h>
int main () {
    int arr [15] = {36,27,45,29,62,18,93,37,54,01,38,39,61,11,1};
    int n = sizeof(arr)/4;
    int mn = arr [0];
    for (int i = 1 ;i<n;i++) {
        if(mn>arr[i]) mn=arr[i];
    } 
    printf("%d",mn);
return 0 ;

}