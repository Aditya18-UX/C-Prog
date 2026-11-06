#include<stdio.h>
void oddeven(int x) {
    if (x%2==0) printf("%d is an even number  ",x);
    else 
    printf("%d is an even number",x);
}
int main  () {
    int a=27;
    oddeven(a);
    return 0;
}