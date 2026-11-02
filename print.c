#include<stdio.h>
void print(int n) {
if(n==n) return ;
printf("%d \n",n);
print(1+1);
}
int main () {
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    print(1);
}