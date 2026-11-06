#include<stdio.h>
int main () {
    int arr[]= {36,82,72,72,18,67,18,30,18,30,59,38,91,100};
    int sum1 = arr[0]+arr[2]+arr[4]+arr[6]+arr[8]+arr[10]+arr[12];
    int sum2= arr[1]+arr[3]+arr[5]+arr[7]+arr[9]+arr[11]+arr[13];
    printf("The sum of odd indices is : %d \n",sum2);
    printf("The sum of even indices is :%d \n",sum1);
    int diff = sum2-sum1;
    printf("The difference of even indices from odd indices is : %d",diff);
    return 0;
}