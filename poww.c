
#include<stdio.h>
#include<math.h>
int  power() {
    int a,b;
    printf("Enter the base : \n");
    scanf("%d",&a);
    printf("Enter the power: \n");
    scanf("%d",&b);
    int pw = (int)  pow(a,b);
    printf("The result of base %d to the power %d is %d \n",a,b,pw );

}
int main () {
    power() ;
}