#include <stdio.h>

int main() {
    char name[10]; 
    
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);
    
    printf("Hello, %s! Nice to meet you.\n", name);
    
    return 0;
}
