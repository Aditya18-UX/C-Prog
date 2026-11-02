// #include<stdio.h>
// int main () {
//     int n,i,sum = 0;
//     printf("Enter a positive integer :");
//     scanf("%d",&n);
//     for(int i=1;i<=n;++i) {
//         sum+=i;
//     }
//     printf("The sum of the  first %d natuiral numbers is : %d \n",n,sum);
// }
#include <stdio.h>

/* Function declaration */
int add(int, int);

int main(void)
{
    int result;

    result = add(10, 20);

    printf("Sum = %d\n", result);

    return 0;
}

/* Function definition */
int add(int a, int b)
{
    return a + b;
}