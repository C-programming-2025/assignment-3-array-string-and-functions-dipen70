// Implement a C program to reverse the elements of an array.
#include<stdio.h>

int main(){
    int n, i;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    
    int arr[n],new_arr[n];
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    for(i=0;i<n;i++){
        new_arr[i]=arr[n-i-1];
    }
    
    printf("Reversed array elements are:\n");
    for(i = 0; i < n; i++){
        printf("%d ", new_arr[i]);
    }
    printf("\n");
    
    return 0;
}