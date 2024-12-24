#include <stdio.h>
#define SIZE 30

int stack1[SIZE],top1 = -1;
int stack2[SIZE] , top2 = -1;

void Stack1push(int item) {
    if (top1 >= SIZE - 1) {
        printf("Stack 1 Overflow\n");
    } else {
        top1++;
        stack1[top1] = item;
    }
}

void Stack2push(int item) {
    if (top2 >= SIZE - 1) {
        printf("Stack 2 Overflow\n");
    } else {
        top2++;
        stack2[top2] = item;
    }
}
int compareStacks() {
    if (top1 != top2) {
        return 0; 
    }

    for (int i = 0; i <= top1; i++) {
        if (stack1[i] != stack2[i]) {
            return 0; 
        }
    }

    return 1;  
}

int main() {
    int n, value;

    printf("Enter number of elements for Stack 1:");
    scanf("%d", &n);
    printf("Enter elements for Stack 1:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &value);
        Stack1push(value);
    }

    printf("Enter number of elements for Stack 2: ");
    scanf("%d", &n);
    printf("Enter elements for Stack 2:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &value);
        tack2push(value);
    }

    int result = compareStacks();
    if (result == 1) {
        printf("Stacks are same\n");
    } else {
        printf("Stacks are not same\n");
    }

    return 0;
}
