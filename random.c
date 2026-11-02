#include<stdio.h>
int main() {
    int m;
    printf("Enterv the number of rows:");
    scanf("%d",&m);
    int n;
    printf("Enter the number of columns:");
    scanf("%d",&n);

    //NESTED LOOP
    for(int i=1;i<=m;i++) { // FOR ROWS
        for(int i=1;i<=n;i++){ // FOR COLUMNS
            printf("+");
        }
        printf("\n");
    }
    return 0;
}