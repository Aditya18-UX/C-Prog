#include <stdio.h>

int main()
{
    int n, i, sum = 0;

    printf("Enter the range: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        sum = sum + i;
    }

    printf("Sum of natural numbers = %d", sum);

    return 0;
}