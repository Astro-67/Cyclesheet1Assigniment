#include <stdio.h>
#define SIZE 5

int queue[SIZE], front = -1, rear = -1;

void enqueue(int item) {
    if (rear == SIZE - 1) {
        printf("Queue Overflow\n");
    } else {
        if (front == -1) {
            front = 0;
        }
        rear++;
        queue[rear] = item;
    }
}

int dequeue() {
    if (front == -1 || front > rear) {
        printf("Queue Underflow\n");
        return -1;
    } else {
        int item = queue[front];
        front++;
        if (front > rear) {
            front = rear = -1;
        }
        return item;
    }
}

int MaxElement() {
    int max = queue[front];
    int tempFront = front;
    
    while (tempFront <= rear) {
        if (queue[tempFront] > max) {
            max = queue[tempFront];
        }
        tempFront++;
    }
    
    return max;
}

int main() {
    int n, value;
    
    printf("Enter number of elements: ");
    scanf("%d", &n);
    
    printf("Enter elements for the queue:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &value);
        enqueue(value);
    }
    
    printf("Max element in the queue is: %d\n", findMax());
    return 0;
}
