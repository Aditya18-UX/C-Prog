#include<stdio.h>
int x;
void even(int x) {
    
    printf("Enter an integer :",x);
    scanf("%d",&x);
    if (x%2==0) printf("%d number  is an even number",x);
    else printf("%d number  is an odd number",x);
}
int main () {
    even(x);
return 0;
}