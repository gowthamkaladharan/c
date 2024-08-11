
#include <stdio.h>

#define MAX_SIZE 20

int stack[MAX_SIZE];
int top = -1;

void push(int value) {
    if(top == MAX_SIZE - 1) {
        printf("Stack is full!\n");
        return;
    }
    stack[++top] = value;
}

int pop() {
    if(top == -1) {
        printf("Stack is empty!\n");
        return -1;
    }
    return stack[top--];
}

void printStack() {
    for(int i = 0; i <= top; i++) {
        printf("%d ", stack[i]);
    }
    printf("\n");
}

int main() {
    push(1);
    push(2);
    push(3);
    printStack(); 
    pop();
    printStack(); 
    return 0;
}