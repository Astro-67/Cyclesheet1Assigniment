#include <stdio.h>
#include <stdlib.h>
struct Queue
{
 int front;
 int rear;
 int size;
 int *q;
}que;

void Create(struct Queue *que){
 que->front=que->rear=-1;
 printf("Enter size of Queue: ");
 scanf("%d",&que->size);
 que->q=(int *)malloc(que->size * sizeof(int)); 
}

int  insert(struct Queue *que,int item){
 if(que->front==-1){
  que->front++;
 }
 que->rear++;
 que->q[que->rear]=item;
 return item;
}

int delete(struct Queue *que){
 int item;
 item = que->q[que->front];
 que->front++;
 printf("The deleted item is %d ",item);
 return item;
 
}

void Display(struct Queue que){
 for(int i=que.front;i<=que.rear;i++){
    printf("%d\n",que.q[i]);
 }
}


int main(){
  Create(&que);
  insert(&que,1);
  insert(&que,2);
  insert(&que,3);
  printf("The data before delete\n");
  Display(que);
  delete(&que);
  printf("\nThe data after delete\n");
  Display(que);
  
 return (0);
}
