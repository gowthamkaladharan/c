

#include <stdio.h>

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    int last_digit = number % 10;
    printf("Last digit: %d\n", last_digit);
    return 0;
}




#include <stdio.h>

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    int count = 0;
    while (number > 0) {
        number /= 10;
        count++;
    }
    printf("Number of digits: %d\n", count);
    return 0;
}







#include <stdio.h>

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    int count = 0;
    int original = number;
    
    while (number > 0) {
        number /= 10;
        count++;
    }
    
    int reversed = 0;
    number = original;
    for (int i = 0; i < count; i++) {
        int digit = number % 10;
        reversed = reversed * 10 + digit;
        number /= 10;
    }
    printf("Reversed number: %d\n", reversed);
    return 0;
}





#include <stdio.h>

int main() {
    double base, exponent;
    printf("Enter base: ");
    scanf("%lf", &base);
    printf("Enter exponent: ");
    scanf("%lf", &exponent);
    double result = 1;
    for (int i = 0; i < exponent; i++) {
        result *= base;
    }
    printf("%.2lf^%.2lf = %.2lf\n", base, exponent, result);
    return 0;
}





#include <stdio.h>

void printDivisors(int num) {
    for (int i = 1; i <= num; i++) {
        if (num % i == 0) {
            printf("%d ", i);
        }
    }
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Divisors of %d: ", num);
    printDivisors(num);
    return 0;
}





#include <stdio.h>

int isPrime(int num) {
    if (num <= 1) {
        return 0; 
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0; 
        }
    }
    return 1; 
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (isPrime(num)) {
        printf("%d is a prime number\n", num);
    } else {
        printf("%d is not a prime number\n", num);
    }
    return 0;
}






#include <stdio.h>

int gcd(int a, int b) {
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}

int main() {
    int num1, num2;
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);
    printf("GCD of %d and %d is %d\n", num1, num2, gcd(num1, num2));
    return 0;
}






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


    


#include <stdio.h>

int main() {
    int num, reversed = 0, original;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;

    while (num != 0) {
        int remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
    }

    if (original == reversed)
        printf("%d is a palindrome number.\n", original);
    else
        printf("%d is not a palindrome number.\n", original);

    return 0;
}








#include <stdio.h>

double sqrt(double num) {
    double x = num / 2;
    double epsilon = 0.000001;

    while (1) {
        double x_next = (x + num / x) / 2;
        if (abs(x_next - x) < epsilon)
            break;
        x = x_next;
    }

    return x;
}

int main() {
    double num;
    printf("Enter a number: ");
    scanf("%lf", &num);
    printf("Square root: %.5f\n", sqrt(num));
    return 0;
}







#include <stdio.h>

int main() {
    int num, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    for (int i = 1; i < num; i++) {
        if (num % i == 0)
            sum += i;
    }

    if (sum == num)
        printf("%d is a perfect number.\n", num);
    else
        printf("%d is not a perfect number.\n", num);

    return 0;
}





#include <stdio.h>

int main() {
    int limit, sum;

    printf("Enter a limit: ");
    scanf("%d", &limit);

    for (int num = 1; num <= limit; num++) {
        sum = 0;
        for (int i = 1; i < num; i++) {
            if (num % i == 0)
                sum += i;
        }
        if (sum == num)
            printf("%d is a perfect number.\n", num);
    }

    return 0;
}









#include <stdio.h>

int main() {
    int num, temp, sum = 0, digit, position = 0;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    temp = num;
    

    while (temp != 0) {
        temp /= 10;
        position++;
    }
    
    temp = num;
    
    
    while (temp != 0) {
        digit = temp % 10;
        sum += pow(digit, position);
        temp /= 10;
        position--;
    }
    
    
    if (sum == num)
        printf("%d is a Disarium number\n", num);
    else
        printf("%d is not a Disarium number\n", num);
    
    return 0;
}











