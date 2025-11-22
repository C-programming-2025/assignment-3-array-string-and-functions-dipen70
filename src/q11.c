// Write a function named calculateAverage that takes an array of integers as input and returns the average of the numbers.
#include<stdio.h>
int main(){
    int numbers[10];
    int n, i;
    float sum=0.0, average;

    printf("Enter the number of integers: ");
    scanf("%d",&n);

    printf("Enter %d integers:\n", n);
    for(i=0;i<n;i++){
        scanf("%d",&numbers[i]);
        sum+=numbers[i];
    }

    average=sum/n;
    printf("The average is: %.2f\n",average);
    
    return 0;
}