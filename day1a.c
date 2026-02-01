#include<stdio.h>
int main() {
    int N,i,k,item,j;
    printf("Enter size of element: ");
    scanf("%d", &N);

    int arr[N];
    N++;
    printf("Enter elements: ");
    for (i=0;i<N-1;i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter location(index) at which you want to enter new element: ");
    scanf("%d", &k);

    printf("Enter element you want to add: ");
    scanf("%d", &item);

    for(j=N-2;j>=k-1;j--) {
        arr[j+1]=arr[j];
    }
    arr[k-1]=item;
    printf("Modified array is: ");
    for(i=0;i<N;i++) {
        printf("%d\t",arr[i]);
    }

    return 0;
}
