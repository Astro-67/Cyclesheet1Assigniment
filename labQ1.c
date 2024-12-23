#include <stdio.h>
#define size 30

int stack [size],top;

//function Prototype
void push(int item);
int pop();
int peek();
void display();

int main(){
    top = -1;
     int choice=1,value;

     while(choice == 1){
        printf("\n 1.Push Operation\n");
        printf("\n 2.Pop Operation\n");
        printf("\n 3.Peek Operation\n");
        printf("\n 4.Display Operation\n");
        printf("Enter Your choice:");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
        printf("\nEnter the data you want to add:");
        scanf("%d",&value);
        push(value);  
        break;

        case 2:
        value = pop();
        if (value!=-1){
            printf("Deleted data is %d \n",value);
        }
        break;

        case 3:
        value = peek();
        if (value!=-1){
            printf("The Peek element  is %d\n",value);
        }

        case 4:
        display();
        break;
        }
        printf("Do you want to continue (1/0):");
        scanf("%d",&choice);
     }

}
void push(int item){
    if ( top >=size-1){
        printf("The stack is full");
    }else{
        top++;
    stack[top]=item;
    }
    
}

int pop(){
    int item;
    if (top == -1){
        printf("Stack is empty");
        return -1;
    }else{
        item = stack[top];
        top --;

        return item;
    }
    
   
}

int peek(){
    if(top == -1){
        printf("stack is empty");
        return -1;
    }else {
        return stack[top];
    }
}

void display(){
    if (top == -1){
        printf("Stack is empty");
    }else {
    for (int i = top;i>=0;i--){
        printf("%d\n",stack[i]);
    }
    }
}