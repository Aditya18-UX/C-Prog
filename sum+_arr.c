#include<stdio.h>
int main () {
    int arr[]={47,92,84,10,73,94,27,390};
int n = sizeof(arr)/4;
int sum = 0;
for(int i=0;i<=n;i++) {
    sum = sum+arr[i];
    
}
printf("%d \n",sum);
    return 0;
}