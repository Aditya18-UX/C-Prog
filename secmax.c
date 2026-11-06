#include<stdio.h>
#include<limits.h>
int main () {
    int arr[] = {47,39,28,33,94,74,59,28,50,17,49};
    int n =sizeof(arr)/4;
    int max = INT_MIN;   // FINDING FIRST LARGEST
    for(int i = 0; i<n;i++) {
        if(max<arr[i])max = arr[i];
    }
 printf("The maximum element in the array is %d \n",max);
 
// FINDING SECOND LARGEST 
int smax = INT_MIN; 
for(int i = 0;i<n;i++) {
    if(arr[i]!=max && smax<arr[i]) smax = arr[i];
}
printf("%d is the second largest elementy in the array",smax);
return 0;
}

