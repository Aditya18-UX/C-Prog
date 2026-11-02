#include<stdio.h>
int min(int x, int y) { 
    if(x<y) return x;
    else return y ;
}
int main  () {
    int i,j,k;
    printf("Enter 1st Number: \n");
    printf("Enter 2nd Number: \n");
    scanf("%d %d",&i,&j);
    k =min(i,j);
    printf("The minimum of %d and %d is %d",i,j,k);
    min(i,j);
    return 0;


}
// include <stdio.h>

// int min(int x, int y)
// {
//     if (x < y)
//         return x;
//     else
//         return y;
// }

// int main(void)
// {
//     int i, j, k;

//     printf("Enter first number: ");
//     scanf("%d", &i);

//     printf("Enter second number: ");
//     scanf("%d", &j);

//     k = min(i, j);

//     printf("The minimum of %d and %d is %d\n", i, j, k);

//     return 0;
// }