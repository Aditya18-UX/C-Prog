#include<stdio.h>
int cube () {
    int a;
    printf("Enter the integer of which you want cube root : \n");
    scanf("%d",&a);
    float cu = cbrt(a);
    printf("The cube root of the %d is %.2f \n",a,cu);


}
int main () {
    cube() ;
}