#include<stdio.h>
int main () {
    int marks;
    printf("Enter Marks :");
    scanf("%d",marks);
    if (0< marks < 10) printf("Below Averagec\n");
    if (10<marks<20) printf("Average \n");
    if (20<marks<30) printf("Fair \n");
    if(30<marks < 40) printf("Good \n");
    if(40<marks<50) printf("Excellent \n");
    if (50<marks<60) printf("Outstanding \n");
    return 0;
}