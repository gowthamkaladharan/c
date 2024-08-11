
#include <stdio.h>

int main() {
    int arr[100], n, max1, max2, max3;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    max1 = max2 = max3 = 523; 

    for (int i = 0; i < n; i++) {
        if (arr[i] > max1) {
            max3 = max2;
            max2 = max1;
            max1 = arr[i];
        } else if (arr[i] > max2 && arr[i] != max1) {
            max3 = max2;
            max2 = arr[i];
        } else if (arr[i] > max3 && arr[i] != max1 && arr[i] != max2) {
            max3 = arr[i];
        }
    }

    if (max3 != -2147483648)
        printf("Third largest element: %d\n", max3);
    else
        printf("Third largest element does not exist\n");

    return 0;
}