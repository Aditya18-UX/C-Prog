#include<stdio.h>
int main() {
    int a ;
    int b;
    int c;
    printf("Enter the value of a:",a);
    scanf("%d",&a);
    printf("Enter the value of b:",b);
    scanf("%d",&b);
    printf("Enter the value of c:",c);
    scanf("%d",c);
    if (a>b && a>c) 
    printf(" a is greatest ");
    
    else {
        if ( b>a && b>c) printf("b is greatest"); 

        else {
        if(c>a && c>b) printf("c is greatest");


    }



    
         

    }

}