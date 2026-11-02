#include <stdio.h>
int main() {
    int x;
    int y;
    int z;
    printf("Enter the side 1 of Triangle %d :",x);
    scanf("%d",&x);
    printf("Enter the side 2 of Triangle %d :",y);
    scanf("%d",&y);
    printf("Enter the side 3 of Triangle %d :",z);
    scanf("%d",&z);
    if (x+y>z && y+z>x && z+x>y) {
    printf("The Entered Triangle is valid triangle "); 
    }    else printf("The triangle is not a valid triangle ");
    
    return 0;


}