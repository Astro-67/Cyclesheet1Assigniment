#include <stdio.h>
#include <string.h>

#define SIZE 30
typedef struct {
    char name[50];
    int age;
} Student;

Student stack[SIZE];
int top = -1;

void push(Student student) {
    if (top >= SIZE - 1) {
        printf("Stack Overflow\n");
    } else {
        top++;
        stack[top] = student;
    }
}

Student pop() {
    if (top == -1) {
        printf("Stack Underflow\n");
        Student empty = {"", -1};
        return empty;
    }
    return stack[top--];
}

void display() {
    if (top == -1) {
        printf("Stack is empty\n");
    } else {
        for (int i = top; i >= 0; i--) {
            printf("Name: %s, Age: %d\n", stack[i].name, stack[i].age);
        }
    }
}

int main() {
    int n;
    Student student;
    
    printf("Enter number of students: ");
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++) {
        printf("Enter name: ");
        scanf("%s", student.name);
        printf("Enter age: ");
        scanf("%d", &student.age);
        push(student);
    }
    
    printf("Student details in stack:\n");
    display();
    
    return 0;
}
