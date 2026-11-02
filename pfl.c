#include<stdio.h>
int main () {
    int sp ;
    printf("Enter the selling price of item %d :");
    scanf("%d",&sp);
    int cp;
    printf("Enter the Cost Price of Item %d:");
    scanf("%d",&cp);
    if (cp>sp)
    printf("The customer hve made a loss \n");
    if (sp>cp)
    printf("The customer have made a profit \n");
    int profit = sp-cp;
    printf("Enter the Profit %d \n: ",profit);
    int loss = cp-sp;
    printf("Enter the loss amount %d \n:",loss);
    if (profit>loss)
    printf("You hve made a profit of Rs %d \n",profit);
    if (loss>profit)
    printf("You made a loss of %d \n ",loss);
    return 0;
  

}
