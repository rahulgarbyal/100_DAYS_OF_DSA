#include <stdio.h>

int main() {
    int n;
    printf("Enter size: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter elements: ");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int min_sum = arr[0] + arr[1];
    int num1 = arr[0];
    int num2 = arr[1];

    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {

            int sum = arr[i] + arr[j];

            if(sum < 0) sum = -sum;              // manual abs
            int temp = min_sum;
            if(temp < 0) temp = -temp;

            if(sum < temp) {
                min_sum = arr[i] + arr[j];
                num1 = arr[i];
                num2 = arr[j];
            }
        }
    }

    printf("%d %d", num1, num2);
    return 0;
}