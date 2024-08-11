



#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]);
    int j = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] % 20 != 0) {
            arr[j++] = arr[i];
        }
    }

    printf("Resulting array: ");
    for (int i = 0; i < j; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

   return 0;
}