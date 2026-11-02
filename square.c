#include <stdio.h>

int main()
{
    int n, i;

    printf("Enter the range: ");
    scanf("%d", &n);

    printf("Square of even numbers:\n");

    for(i = 2; i <= n; i = i + 2)
    {
        printf("Square of %d = %d\n", i, i * i);
    }

    return 0;
}