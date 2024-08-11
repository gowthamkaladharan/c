

#include <stdio.h>

int secondLargest(int arr[], int n) {
    int max = arr[0], secondMax = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            secondMax = max;
            max = arr[i];
        } else if (arr[i] > secondMax && arr[i] != max) {
            secondMax = arr[i];
        }
    }
    return secondMax;
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Second largest element: %d\n", secondLargest(arr, n));
    return 0;
}








#include <stdio.h>

int countWords(char str[]) {
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ' && str[i + 1] != ' ' && str[i + 1] != '\0') {
            count++;
        }
    }
    return count + 1;
}

int main() {
    char str[] = "Hello World, this is a test";
    printf("Number of words: %d\n", countWords(str));
    return 0;
}








#include <stdio.h>

int stringLength(char str[]) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}

int main() {
    char str[] = "Hello World";
    printf("Length of string: %d\n", stringLength(str));
    return 0;
}







#include <stdio.h>

void concatenate(char str1[], char str2[]) {
    int i, j;
    for (i = 0; str1[i] != '\0'; i++);
    for (j = 0; str2[j] != '\0'; j++) {
        str1[i + j] = str2[j];
    }
    str1[i + j] = '\0';
}

int main() {
    char str1[100] = "Hello ";
    char str2[] = "World";
    concatenate(str1, str2);
    printf("Concatenated string: %s\n", str1);
    return 0;
}









#include <stdio.h>

int isPalindrome(char str[]) {
    int i, j;
    for (i = 0, j = stringLength(str) - 1; i < j; i++, j--) {
        if (str[i] != str[j]) {
            return 0;
        }
    }
    return 1;
}

int main() {
    char str[] = "madam";
    if (isPalindrome(str)) {
        printf("String is a palindrome\n");
    } else {
        printf("String is not a palindrome\n");
    }
    return 0;
}








#include <stdio.h>

int countOccurrences(char str[], char ch) {
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch) {
            count++;
        }
    }
    return count;
}

int main() {
    char str[] = "Hello World";
    char ch = 'l';
    printf("Occurrences of '%c': %d\n", ch, countOccurrences(str, ch));
    return 0;
}









#include <stdio.h>

void mergeArrays(int arr1[], int arr2[], int n1, int n2) {
    int i = 0, j = 0, k = 0;
    int merged[n1 + n2];
    while (i < n1 && j < n2) {
        if (arr1[i] < arr2[j]) {
            merged[k++] = arr1[i++];
        } else {
            merged[k++] = arr2[j++];
        }
    }
    while (i < n1) {
        merged[k++] = arr1[i++];
    }
    while (j < n2) {
        merged[k++] = arr2[j++];
    }
    for (int i = 0; i < n1 + n2; i++) {
        printf("%d ", merged[i]);
    }
    return 0;
}




