#include<stdio.h>
#include<stdlib.h>
void main() {
    int n1,n2,i,j=0,k=0,l=0;

    printf("Enter size of array1: ");
    scanf("%d", &n1);

    int arr1[n1];

    printf("enter elements: ");
    for(i=0;i<n1;i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter size of array2: ");
    scanf("%d", &n2);

    int total_size=n1+n2;
    int arr2[n2];

    printf("enter elements: ");
    for(i=0;i<n2;i++) {
        scanf("%d", &arr2[i]);
    }

    int*resultant=(int*)malloc(sizeof(int*));

    while (j < n1 && k < n2) {
        if(arr1[j]<=arr2[k]){
            resultant[l]=arr1[j];
            j++;
            l++;
        }
        else {
            resultant[l]=arr2[k];
            k++;
            l++;
        }
    }

    while(j < n1) {
        resultant[l]=arr1[j];
        j++;
        l++;
    }

    while (k < n2) {
        resultant[l]=arr2[k];
        k++;
        l++;
    }

    for (i=0;i<total_size;i++) {
        printf("%d\t", resultant[i]);
    }

    free(resultant);
}