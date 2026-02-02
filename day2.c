#include<stdio.h>
int main() {
    int N,i,k,del,j;
    printf("Enter the size of Array: ");
    scanf("%d", &N);

    int arr[N];

    printf("Enter elements: ");
    for(i=0;i<N;i++) {
        scanf("%d",&arr[i]);
    }

    for(i=0;i<N;i++) {
        printf("%d\t", arr[i]);
    }

    printf("\n");

    printf("Enter location at which you want to delete an element: ");
    scanf("%d", &k);

    del=arr[k];

    for (j=k;j<N;j++) {
        arr[j]=arr[j+1];
    }
    
    printf("array after deletion: ");
    for (i=0;i<N-1;i++) {
        printf("%d\t", arr[i]);
    }

    return 0;
}