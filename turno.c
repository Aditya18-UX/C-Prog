#include<stdio.h>
int main () {
    int n;
    printf("Enter an Integer:");
    scanf("%d",&n);
    (n%2==0)? printf("Ohhh yes it is an even number"): printf("It is  an odd number");
    return 0;
}