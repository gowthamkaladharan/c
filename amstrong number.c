
#include <stdio.h>

int isArmstrong(int num) {
    int sum = 0;
    int digits = 0;
    int temp = num;

    
    while (temp > 0) {
        temp /= 10;
        digits++;
    }

    temp = num;
    while (temp > 0) {
        int digit = temp % 10;
        sum += pow(digit, digits);
        temp /= 10;
    }

    return sum == num;
}
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (isArmstrong(num)) {
        printf("%d is an Armstrong number\n", num);
    } else {
        printf("%d is not an Armstrong number\n", num);
    }
    return 0;
}