#include<stdio.h>
void rotate(int arr[], int size, int k) {
     for(int i = 0; i < k; i++) {
        int temp = arr[size - 1];  

        for(int j = size - 1; j > 0; j--) {
            arr[j] = arr[j - 1];
        }

        arr[0] = temp;  
    }
}
void main() {
    int size,k;

    printf("enter size of array: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter elements: ");

    for (int i = 0;i < size; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter positions to shift: ");
    scanf("%d", &k);

    rotate(arr,size,k);

    printf("Rotated Array: ");
    for (int i = 0; i < size ; i++) {
        printf("%d ", arr[i]);
    }
}