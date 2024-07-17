#include <stdio.h>
#include <stdlib.h>

#define MAX 100

int a[MAX];
int n;

void create() {
    printf("Enter how many elements to enter: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
}

void display() {
    printf("Elements in the array are: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}

void insert() {
    int pos, val;

    printf("Enter the position to insert: ");
    scanf("%d", &pos);

    if (pos < 1 || pos > n + 1) {
        printf("Invalid position\n");
        return;
    }

    printf("Enter the value to insert: ");
    scanf("%d", &val);

    pos = pos - 1;

    for (int i = n - 1; i >= pos; i--) {
        a[i + 1] = a[i];
    }

    a[pos] = val;
    n = n + 1;

    printf("Element inserted successfully\n");
}

void delete() {
    int pos, val;

    printf("Enter the position of element to be deleted: ");
    scanf("%d", &pos);

    if (pos < 1 || pos > n) {
        printf("Invalid position\n");
        return;
    }

    pos = pos - 1;
    val = a[pos];

    for (int i = pos; i < n - 1; i++) {
        a[i] = a[i + 1];
    }

    n = n - 1;

    printf("Deleted element is %d\n", val);
}

void search() {
    int key, flag = 0;
    printf("Enter the element to be searched: ");
    scanf("%d", &key);

    for (int i = 0; i < n; i++) {
        if (a[i] == key) {
            printf("The element is present at position %d\n", i + 1);
            flag = 1;
            break; 
        }
    }

    if (flag == 0) {
        printf("Search element is not found\n");
    }
}

int main() {
    int ch;
    while (1) {
        printf("Array operations\n");
        printf("1. Create\n");
        printf("2. Display\n");
        printf("3. Insert\n");
        printf("4. Delete\n");
        printf("5. Search\n");
        printf("6. Quit\n");

        printf("Enter the choice: ");
        scanf("%d", &ch);

        switch (ch) {
            case 1:
                create();
                break;
            case 2:
                display();
                break;
            case 3:
                insert();
                break;
            case 4:
                delete();
                break;
            case 5:
                search();
                break;
            case 6:
                exit(0);
            default:
                printf("Invalid choice\n");
        }
    }

    return 0;
}
