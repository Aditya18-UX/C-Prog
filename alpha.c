#include<stdio.h>
int main () {
    int m;
    printf("Enter the number for digit you want to print:");
    scanf("%d",&m);
    for (int i=1;i<=m;i++) {
        for (int j=1;j<=m;j++) {
            printf("%c ",j+64);
        }
        printf("\n");
    }
}