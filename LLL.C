#include<stdio.h>
int main() {
    int n;
    printf("Enter the desired integer:");
    scanf("%d",&n);
    if (n%3==0 || n%5==0) printf("The number is divisible by 3 or 5 \n");
    else (n%3 != 0 && n%5!=0) ;
    {   printf("The number is not divisible by 15 \n");
    return 0;
    }

}