#include<stdio.h>
int main() {
    int m ;
    printf("Enter the Marks:");
    scanf("%d",&m);
    if (m>=81 & m<=100) printf("Outstanding");
else{
   if(m>=61 & m<=80) printf("Excellent");
else{
    if(m>=41 & m<=60) printf("Good");
else { 
    if (m>=21 & m<=40) printf("Average");
else {
    if(m>=0 & m<=20) printf("Poor");
    return 0;
}
}
}
}
}