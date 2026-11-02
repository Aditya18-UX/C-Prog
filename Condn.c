#include<stdio.h>
int main () {
    int n;
    printf("Enter a number :");
    scanf("%d",&n);
    if (n>0) printf("positive number ");
    if (n<0) printf("Negative Number");
    return 0;
}