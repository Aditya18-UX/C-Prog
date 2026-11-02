#include<stdio.h>
int fac (int n) {
    if (n ==1) return 1;
    return n * fac(n-1);
}
int main() {
    int n;
    printf("Enter the number of which you want  a factorial:");
    scanf("%d",&n);
    printf("The factorial of your entered number will be %d",fac(n));
    
}