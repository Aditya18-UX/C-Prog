#include<stdio.h>
int main () {
int x;
int y;
int z;
printf("Enter a number: ",x);
scanf("%d",&x);
printf("Enter a number: ",y);
scanf("%d",&y);
printf("Enter a number: ",z);
scanf("%d",&z);
if (x<y) 
 if (x<z) printf("%d is least",x);
 else {
    printf("%d is least",z);
}  
else (y<x);   {
if (y<z)
printf("%d is least",y);
else 
printf("%d is least",x);
return 0;
}
}

