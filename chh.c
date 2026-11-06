#include<stdio.h>
int main () {
    int arr []= {33,73,21,47,89,10,34,82,56,52,19,29};
    int n = sizeof(arr)/4;
    for (int i = 0;i<n;i++) {
        printf("%d ",arr[i]);
    }
for (int i = 0;i<n;i++) {
        if(i%2==0 ){
            printf("%d \n ",arr[i]+10);
        }
        
        else {
            printf("%d \n ",arr[i]*2);
        }


}

}

    