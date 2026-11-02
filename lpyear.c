#include<stdio.h>
int main() {
    int year;
printf("Enter a year:");
scanf("%d",&year);
(year%4==0 && year%400 != 0)? printf("Entered year is a leap year "): printf("Entered year is not a leap year");
}