#include<stdio.h>
int main() {
    int c;
    printf("The first number is : \n");
    scanf("%d",&c);
    int d;
    printf("The second number is : \n");
    scanf("%d",&d);
    int sum = c+d;
    int sub = c-d;
    int diva = c/d;
    int mul = c*d;
    int mod = c%d;
    printf("The sum of both numbers is: %d \n",sum);
    printf("The sub of both numbers is: %d \n",sub);
    printf("The div of both numbers is: %d \n",diva);
    printf("The mul of both numbers is: %d \n",mul);
    printf("The mod of both numbers is: %d \n",mod);
    return 0;

}