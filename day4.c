#include<stdio.h>
void main() {
    int N,i,begin=0,temp;
    printf("Enter size of array: ");
    scanf("%d", &N);
    int arr[N],end=N-1;

    printf("Enter elements: ");
    for (i=0;i<N;i++) {
        scanf("%d", &arr[i]);
    }
    while (begin < end) {
        temp=arr[begin];
        arr[begin]=arr[end];
        arr[end]=temp;
        begin++;
        end--;
    }

    printf("Reversed Array: ");
    for (i=0;i<N;i++) {
        printf("%d\t",arr[i]);
    }

}