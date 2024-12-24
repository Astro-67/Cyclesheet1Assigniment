#include <stdio.h>
#define SIZE 30

int stack[SIZE], top = -1;

void push(int item) {
    if (top >= SIZE - 1) {
        printf("Stack Overflow\n");
    } else {
        top++;
        stack[top] = item;
    }
}


void display() {
  
        for (int i = 0; i <=top; i++) {
            printf("%d \n", stack[i]);
        }
    
}

void displayReversse() {
        for (int i = top; i >= 0; i--) {
            printf("%d ", stack[i]);
        }
}

int main() {
    int n,value;
    
    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++) {
        printf("Enter value %d:",i);
        scanf("%d", &value);
        push(value);
    }

    
    printf("Your Element is :");
    display();
    printf("The data after reverse is:");
    displayReversse();
  
    return 0;
}
