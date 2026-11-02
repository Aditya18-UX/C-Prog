#include<stdio.h>
int main () {
    int n;
    printf("Enter the number of which u want to find the highest factor:");
    scanf("%d",&n);
    int hf=1;
    for(int i = 1;i<=n-1;i++) {
    
    if(n%i==0) hf=i;
    }
    printf("Highest factor is : %d",hf);
}
