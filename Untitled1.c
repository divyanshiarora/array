#include <stdio.h>

int main() {
    int n, i;
    float sum = 0.0;

    printf("enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("enter %d integers:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    float average = sum / n;
    printf("average of the entered numbers: %.2f\n", average);

    return 0;
}
