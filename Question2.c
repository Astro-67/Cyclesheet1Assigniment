#include<stdio.h>
#include<ctype.h> 

#define SIZE 100

struct stack {
    char arr[SIZE]; 
    int top;
} st; 
 
int empty() {
    if(st.top == -1){
    	return 1;
	}
	else
	return 0;
}


int full() {
    if(st.top >= SIZE - 1){
    	return 1;
	}
	return 0;
}


void push(char value) {
    if (!full()) {
        st.arr[st.top] = value;
        st.top++;
    } else {
        printf("Stack is full\n ");
    }
}


char pop() {
    if (!empty()) {
        int value;
        value = st.arr[st.top];
        st.top--;
    }
    printf("Stack underflow!\n");
    return 0; 
}


int prec(char c) {
    if (c == '(') return 0;
    if (c == '+' || c == '-') return 1;
    if (c == '*' || c == '/') return 2;
    return -1; 
}


int is_operator(char c) {
    return c == '+' || c == '-' || c == '*' || c == '/';
}


void infix_to_postfix(const char* expression, char* output) {
    int j = 0; 
    for (int i = 0; expression[i] != '\0'; i++) {
        char current = expression[i];

        if (current == ' ') continue; 

        if (isalnum(current)) { 
            output[j++] = current;
        } else if (current == '(') { 
            push(current);
        } else if (current == ')') { 
            while (!empty() && st.arr[st.top] != '(') {
                output[j++] = pop();
            }
            pop(); 
        } else if (is_operator(current)) { 
            while (!empty() && prec(st.arr[st.top]) >= prec(current)) {
                output[j++] = pop();
            }
            push(current);
        }
    }

    
    while (!empty()) {
        output[j++] = pop();
    }
    output[j] = '\0'; 
}

int main() {
	st.top == -1;
    char expression[SIZE], output[SIZE];
    printf("Enter an infix expression: ");
    scanf("%s", expression);

    infix_to_postfix(expression, output);
    printf("Postfix expression: %s\n", output);

    return 0;
}
