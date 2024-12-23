#include <stdio.h>
#include <stdlib.h>
 struct Stack {
   int size;
   int top;
   int *s;
}st;

 void Create(struct Stack *st){
    printf("Enter size of Stack: ");
    scanf("%d",&st->size);
    st->top = -1;
    st->s =(int *)malloc(st->size * sizeof(int));
}

 void Push(struct Stack *st,int item){
  if(st->top==st->size-1){
    printf("Stack overflow\n");
 }else {
  st->top++;
  st->s[st->top]=item;
 }
}

 int Pop(struct Stack *st){
  int item=-1;
  if(st->top== -1)
 printf("Stack underflow\n");
 else{
   item = st->s[st->top--];
 }
 return item;
}

 void Display(struct Stack st){
  for(int i=st.top;i>=0;i--){
     printf("%d\n",st.s[i]);
 }
}

int main(){
 Create(&st);
 int start = 1,item;

 while(start){
   int selection;
   printf("1.Push\n");
   printf("2.Pop\n");
   printf("3.Display\n");
   printf("Choose Operation: ");
   scanf("%d",&selection);
 switch(selection){
  case 1:
 printf("Enter Element: ");
 scanf("%d",&item);
 Push(&st,item);
  break;

  case 2:
  item=Pop(&st);
 if(item != -1){
 printf("The Element %d is Poped\n",item);
 }
 break;

 case 3:
 Display(st);
 break;
 }

  printf("Do you wish to Continue(1/0):");
  scanf("%d",&start);


 }

}
