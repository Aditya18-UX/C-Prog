#include<stdio.h>
int main () {
    int n;
    printf("Enter the number till u want to print the odd number:");
    scanf("%d",&n);
    for (int i=1;i<=n;i+=2) {
        printf("%d \n",i);
    }
return 0;
}