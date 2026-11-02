#include<stdio.h>
int main () {
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    if(n%15!=0){
        if (n%3!=0) {
        if (n%5==0) printf("Condition is valid");
        else printf("condition invalid");

    }
    else printf("Condition valid");
}

else 
   printf("Condition is Invalid");
   return 0;
}