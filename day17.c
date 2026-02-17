#include<stdio.h>
void main() {
    int i,n;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter elements: ");
    for (i=0;i<n;i++) {
        scanf("%d", &arr[i]);
    }

    int max=arr[0],min=arr[0];

    for (i=0;i<n;i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
        else if (arr[i] < min) {
            min = arr[i];
        }
    }
    printf("Max: %d\n", max);
    printf("Min: %d\n", min);
}