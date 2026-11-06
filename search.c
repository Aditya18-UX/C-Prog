#include<stdio.h>
#include<stdbool.h>
int main () {
    int arr[] = {37,89,28,28,49,280,15,39,37,40,20,47,99,17,38};
    int n =sizeof(arr)/4;
    for(int i=0;i<n;i++) {
        printf("%d ",arr[i]);
    }
    printf("\n");
    int x= 280;
    bool flag = false;
    for(int i = 0;i<n;i++) {
        if(arr[i] == x) {
            printf("The number %d exists in the array at the index %d",x,i);
            flag = true;
            break;
        }
    }
    if(flag == false) {
        printf("%d is not present in the array at any index",x);
    }
    return 0;
}