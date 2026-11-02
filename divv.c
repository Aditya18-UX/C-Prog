#include<stdio.h>
int main() {
    int n;
    printf("Enter a number %d: ");
    scanf("%d",&n);
    if (n%15==0) {
    printf("The printed number is divisible by 3 and 5 \n"); 
    }    else {
            printf("The entered number is not divisible by 15 \n ");
        }
    }
