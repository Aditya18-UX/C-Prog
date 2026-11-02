#include<stdio.h>
int main () {
    int n;
    int new;
    printf("Enter your favoriate integer \n");
    scanf("%d",&n);
    if (n>0)
    printf("The absolute value of integer is %d ",n);
    // scanf("%d",n);

    if (n<0)
    // int new;
    new =n*(-1);
    printf("The absolute value is  %d\n",new);
    // scanf("%d",new);
    return 0;


}