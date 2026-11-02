#include <stdio.h>

int main() {
    int n;
    
    printf("Enter your number: ");
    scanf("%d", &n);
    
    if (n >= 100 && n <= 999) {
        printf("Entered number is a 3 digit number\n");
    } else {
        printf("Entered number is not a 3 digit number\n");
    }
    
    return 0;
}