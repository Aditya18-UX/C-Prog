#include<stdio.h>
int main () {
    int arr[] = {236,783,82,74,71,10,38,489,28,20,38,129,38,192};
    int n = sizeof(arr)/4;
   
    for(int i = 0;i<n;i++) {
        printf("%d " ,arr[i]);

    }
    printf("\n");
    int target = 100;
    int count = 0;
    for(int i=0;i<n;i++) {
        if (arr[i]>target) {
            count++;
        }
    }
    printf("The number of element greater than the target element is %d",count);
}