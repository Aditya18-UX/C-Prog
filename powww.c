#include<stdio.h>
#include<math.h>
int main () {
    int a;
    printf("Enter the base:");
    scanf("%d",&a);
    int b;
    printf("Enter the power:");
    scanf("%d",&b);
    int p = pow(a,b);
    printf("The %d base to the power %d is %d",a,b,p);
    


}