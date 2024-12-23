#include<stdio.h>

#define size 20
struct stack{
	char arr[size];
	int top;
}st;

int full(){
	if(st.top >= st.arr){
		return 1;
	}
	else
	return 0;
}

int empty(){
	if(st.top == -1)
	return 1;
	else
	return 0;
}

int push(int value){
	if(!full()){
		st.arr[st.top] = value;
		st.top++;
	}
	else
	printf("The stack is full! ");
}

int pop(){
	int value;
	if(!empty()){
		value = st.arr[st.top];
		st.top--;
	}
	else
	printf("The stack is empty! ");
}

int main(){
	char expression;
	printf(" Please enter the expression to convert it to postfix: ");
	scanf("%s",expression);
}