#include <stdio.h>

int main(void)
{
    int a[5];
    int i;

    printf("Enter 5 integers:\n");

    for (i = 0; i < 5; i++)
    {
        if (scanf("%d", &a[i]) != 1)
            return 1;
    }

    printf("Array elements: ");

    for (i = 0; i < 5; i++)
    {
        printf("%d ", a[i]);
    }

    printf("\n");
    return 0;
}