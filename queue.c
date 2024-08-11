
#include <stdio.h>
#define MAX 5
int q[MAX], front = -1, rear = -1;
void enqueue() {
int data;
if (rear == MAX - 1) {
printf("Overflow\n");
} else {
 if (front == -1) {
front = 0;
 }
 printf("Enter the element: ");
scanf("%d", &data);
rear++;
q[rear] = data;
 printf("Enqueued element: %d\n", data);
    }
}

void dequeue() {
 if (front == -1 || front > rear) {
 printf("Underflow\n");
 } else {
 printf("Dequeued element: %d\n", q[front]);
 front++;
 }
}

void display() {
 int i;
 if (front == -1) {
 printf("Queue is empty\n");
 } else {
 printf("Elements: ");
 for (i = front; i <= rear; i++) {
 printf("%d ", q[i]);
 }
 printf("\n");
    }
}

int main() {
int ch;
 printf("1. Enqueue\n");
printf("2. Dequeue\n");
printf("3. Display\n");
printf("4. Exit\n");

while (1) {
printf("Enter your choice: ");
 scanf("%d", &ch);

 switch (ch) {
 case 1:
  enqueue();
 break;
 case 2:
 dequeue();
  break;
 case 3:
 display();
 break;
case 4:
 return 0;
 default:
 printf("Wrong choice\n");
        }
    }
}
