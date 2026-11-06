

#include<stdio.h>
void change(int x[]) {
    x[2]=34;

}
int main() {
    int arr[7]={19,53,82,20,34,19,27};
    // arr[2]=38;
    printf("%d \n",arr[2]);
    change(arr);
    printf("%d \n",arr[2]);
    return 0;


}