#include<stdio.h>
void main() {
    int N,i,ele,loc,compare=1;

    printf("Enter size of array: ");
    scanf("%d", &N);

    int arr[N];
    printf("enter elements : ");
    for (i=0;i<N;i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &ele);

    for(i=0;i<N;i++) {
        if(arr[i]==ele){
            loc=i;
            break;
        }
        else {
            compare++;
        }
    }

    if(compare>N) {
        printf("Element not found");
    }
    else {
        printf("Found at index %d\n",loc);
        printf("comparisons = %d\n", compare);
    }
}