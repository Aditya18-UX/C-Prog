#include<stdio.h>
int main () {
int ram ;
int shyam;
int biku;
printf("Enter the age of Ram %d :  \n",ram);
scanf("%d",&ram);
printf("Enter the age of shyam %d : \n ",shyam);
scanf("%d",&shyam);
printf("Enter the age of Biku %d : \n",biku);
scanf("%d",&biku);
if (ram>shyam) {
    if (ram>biku) printf("Ram is eldest");
    else { printf("Biku is eldest");


    }
}
else { 
    if (shyam> ram ) printf("shyam is eldest");
    else
      printf("Biku is eldest");
    }
}
