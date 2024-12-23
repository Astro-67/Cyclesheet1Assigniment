#include <stdio.h>
#include <string.h>
#define SIZE 10
#define SIZE_STRING 50

struct Queue{
 int front;
 int rear;
 char que[SIZE][SIZE_STRING];
}q;

 void init(){ 
 q.front=q.rear=-1;
 }

 void insert(char *value){
 
  if(q.rear==SIZE-1){
     printf("The Queue is Full");
     return;
  }
  if(q.front==-1){
     q.front=0;
  }
  q.rear++;
  strcpy(q.que[q.rear],value);
 }

 void delete(){
 
 if(q.front==-1||q.front>q.rear){
   printf("Queue is Empty");
   return;
 }
 q.front++;
 if(q.front>q.rear){
   q.front=q.rear=-1;
 }
 
 }

 void display(){
  for(int i=q.front;i<=q.rear;i++){
     printf("%s\n",q.que[i]);
  }
 }
int main(){
  init();
  insert("Player 1 kick the ball");
  insert("Player 2 jump");
  printf("\nData before delete\n");
  display();
  delete();
  printf("\nData after delete\n");
  display();

}
