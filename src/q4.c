// Implement a C program to find the second largest element in an array.
#include<stdio.h>
int main(){
    int n, i;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    
    int first, second;
    first = second = arr[0]; // let minimum value be the first element initially
    
    for(i = 0; i < n; i++){
        if(arr[i] > first){
            second = first;
            first = arr[i];
        } else if(arr[i] > second && arr[i] != first){
            second = arr[i];
        }
    }
    
printf("The second largest element in the array is: %d\n", second);
    
    return 0;
}