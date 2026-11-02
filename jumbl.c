
#include<stdio.h>
void japan () {
    printf("You live in England \n");
    england();
}
void england() {
    printf("You Live in India \n");
    india();
}
void india() {
    printf("You live in Austrailia \n");
    austrailia();
}
void austrailia() {
    printf("You are in heaven \n");
}
int main() {
    printf("You are in hell \n");
    japan();
}