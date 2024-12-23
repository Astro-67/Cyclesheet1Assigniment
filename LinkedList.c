#include <stdio.h>
#include <stdlib.h>

struct Node {
 int data;
 struct Node *next;
};

struct Node *head;

void front_insertion(){
 struct Node *newnode;
 newnode =(struct Node*)malloc(sizeof(struct Node));
 printf("Enter the Element to be inserted");
 scanf("%d",&newnode->data);
 newnode->next = NULL;
 if(head==NULL){
    head==newnode;
 }else{
   newnode->next=head;
   head = newnode;
 }
 return;
}

void back_insertion(){
  struct Node *newnode,*temp;
  if(head == NULL)
  front_insertion();
  else{
    newnode = (struct Node*)malloc(sizeof(struct Node));
    printf("Enter the Element to inserted:");
    scanf("%d",&newnode->data);
    newnode->next=NULL;
    temp=head;
    while(temp->next!=NULL){
      temp=temp->next;
      temp->next=newnode;
    }
  }
  return;
}

int main(){
  front_insertion();
  back_insertion();
 return (0);
}
