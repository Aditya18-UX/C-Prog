#include<stdio.h>
int main () {
    int n;
    printf("Enter the desired number :");
    scanf("%d",&n);
    if (n%3==0)
    {
        if (n%5==0) printf("number is divisible by 3 and 5"); 
        else printf ("Number is not divisible by 3 and 5 ");

    }
    else printf("Number is not divisible by 5 and 3");
}
