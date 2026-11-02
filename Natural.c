#include <stdio.h>

int main()
{
    int n, i;

    printf("Enter the range: ");
    scanf("%d", &n);

    printf("Natural numbers up to %d are:\n", n);

    for(i = 1; i <= n; i++)
    {
        printf("%d ", i);
    }

    return 0;
}