#include<stdio.h>
int main () {
    int arr [] = {37,83,23,10,22,36,19,39,48,55,01};
    // int sum = 0;
    int n = sizeof(arr)/4;
    for (int i = 0;i<n;i++) {
        sum = sum + arr[i];
    }
printf("%d",sum);
}