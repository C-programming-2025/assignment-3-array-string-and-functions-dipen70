// Write a C program to merge two sorted arrays into a single sorted array using for loops.
#include<stdio.h>
int main(){
    int n1, n2, i, j, k;
    
    printf("Enter the number of elements in the first sorted array: ");
    scanf("%d", &n1);
    int arr1[n1];
    printf("Enter %d elements in sorted order:\n", n1);
    for(i = 0; i < n1; i++){
        scanf("%d", &arr1[i]);
    }
    
    printf("Enter the number of elements in the second sorted array: ");
    scanf("%d", &n2);
    int arr2[n2];
    printf("Enter %d elements in sorted order:\n", n2);
    for(i = 0; i < n2; i++){
        scanf("%d", &arr2[i]);
    }
    
    int merged[n1 + n2];
    k=i=j=0;
    while(i<n1 && j<n2){
        if(arr1[i]<arr2[j]){
            merged[k++]=arr1[i++]; // first the value is stored then a increament, here k is still at 0 index and same for i
        }
        else {
            merged[k++]=arr2[j++];// here k and j are still at 0 index and then they are incremented
        }
    }
    while (i<n1)
    {
        merged[k++]=arr1[i++];
    }
    while(j < n2){
         merged[k++] = arr2[j++]; 
    }
    
    // printing the merged sorted array
    printf("Merged sorted array is:\n");
    for(i = 0; i < n1 + n2; i++){
        printf("%d ", merged[i]);
    }
    printf("\n");
    return 0;
}