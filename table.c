#include<stdio.h>
int main () {
    int n;
    printf("The Table of 19 is :");
    scanf("%d",&n);
    for (int n=19;n<=190;n+=19) {
    printf("%d \n",n);
    }
return 0;
}