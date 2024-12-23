#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>  

#define MAX 10
int stack[MAX];
int top = -1;


void push(int value) {
    if (top == MAX - 1) {
        printf("Stack Overflow\n");
        return;
    }
    stack[++top] = value;
}


int pop() {
    if (top == -1) {
        printf("Stack is empty");
        return -1; 
    }
    return stack[top--];
}


int isOperator(char ch) {
    return (ch == '+' || ch == '-' || ch == '*' || ch == '/');
}


int Prefix(char* expression) {
    int i;
    int operand1, operand2, result;

    for (i = strlen(expression) - 1; i >= 0; i--) {
        char ch = expression[i];

        if (isdigit(ch)) {
            
            push(ch - '0');
        } else if (isOperator(ch)) {
        
            operand1 = pop();
            operand2 = pop();
            
            switch (ch) {
                case '+': result = operand1 + operand2; break;
                case '-': result = operand1 - operand2; break;
                case '*': result = operand1 * operand2; break;
                case '/':
                    if (operand2 == 0) {
                        printf("Error: Division by zero\n");
                        return -1; 
                    }
                    result = operand1 / operand2; 
                    break;
                default: result = 0; break;
            }
            
            push(result);
        }
    }

    
    return pop();
}

int main() {
    char expr[MAX];
    
    printf("Enter a prefix expression: ");
    scanf("%s", expr);

    int result = evaluatePrefix(expr);
    
    if (result != -1) {  
        printf("Result of the prefix expression: %d\n", result);
    }

    return 0;
}
