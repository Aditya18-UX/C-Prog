#include <stdio.h>

int main() {
    char ch;

    printf("Enter the operator: ");
    scanf(" %c", &ch);

    int a;
    printf("Enter the number 1: ");
    scanf("%d", &a);

    int b;
    printf("Enter the number 2: ");
    scanf("%d", &b);

    if (ch == '+')
        printf("Result = %d", a + b);
    else if (ch == '-')
        printf("Result = %d", a - b);
    else if (ch == '*')
        printf("Result = %d", a * b);
    else if (ch == '/')
        printf("Result = %d", a / b);
    else
        printf("Invalid operator");

    return 0;
}