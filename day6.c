#include<stdio.h>
int rem_duplicate(int arr[],int n){
    if(n==0)
        return 0;
    
    int j=0; //previous
    for (int i=1;i<n;i++) {
        if(arr[i] != arr[j]) {
            j++;
            arr[j]=arr[i];
        }
    }
    return j+1;
}

void main() {
    int i,n,k;
    printf("Enter size of the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("enter elements: ");
    for(i=0;i<n;i++) {
        scanf("%d", &arr[i]);
    }

    k=rem_duplicate(arr,n);

    printf("array modified: ");
    for (i=0;i<k;i++) {
        printf("%d\t", arr[i]);
    }
}
