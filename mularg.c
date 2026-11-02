#include<stdio.h>
void argg(int x , int y) {
if (x%2 == 0 && y%2==0)
printf("Both numbers are even ");
else
printf("anyone of above number is odd ");
}
int main  () {
    int i;
    int j;
    printf("Enter first number: \n");
    printf("Enter second number: \n");
    scanf("%d %d",&i,&j);
    argg(i,j);
}
 

