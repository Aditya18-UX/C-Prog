#include<stdio.h>
int main() {
    int p,r,t;
    p=100000;
    r=12;
    t=3;
    int SI = p*r*t/100;
    int Total_amnt=SI+p;
    printf("The SI for the amount is %d", SI);
    printf("The total amouny after 3 years is %d:",Total_amnt);
    return 0;
}