#include<stdio.h>
#include<math.h>
int square() {
    int a;
    printf("Enter 1st integer:");
    scanf("%d",&a);
    float sq = sqrt(a);
    printf("The square root of %d is %.2f \n",a,sq);
   
    
}
int main () {
    
    
    square();
    return 0;
}
