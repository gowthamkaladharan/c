#include <stdio.h>

int main() {
    char s[] = "python programming";
    char ch = 'p';
    char result[100];
    int i, j;

    for (i = j = 0; s[i]; i++) {
        if (s[i] != ch) {
            result[j++] = s[i];
        }
    }
    result[j] = '\0';

    printf("Original string: %s\n", s);
    printf("Resulting string: %s\n", result);

    return 0;
}





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





