#include <stdio.h>

int main()
{
    int arr[4], i;
    int product = 1;

    // Input array elements
    for(i = 0; i < 4; i++)
    {
        scanf("%d \n", &arr[i]);
    }

    // Print array elements
    for(i = 0; i < 4; i++)
    {
        printf("%d\n", arr[i]);
    }

    // Calculate product
    for(i = 0; i < 4; i++)
    {
        product = product * arr[i];
    }

    // Display product
    printf("The product of the elements of the array is %d", product);

    return 0;
}