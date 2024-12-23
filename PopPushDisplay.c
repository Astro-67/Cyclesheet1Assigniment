#include<stdio.h>
#define Size 3

stuct stack{
int top;
int s[Size];
}st;

void push(int item)
{
if(st.top>=Size-1)
{
printf("The stack is flow");
}

else
{
top++;
st.s[st.Size]=item;
printf("The element entered is %d",&item)}

}
int pop()
{
if(st.top==-1)
{ printf("The stack is underflow")}

else
{
int item;
st.s[st.top]=item;
top--;
return item;
}

}

void display()
{
for(int i=0;i<st.top;i++)
print("The item in stack is %d",st.s[i]);
}



int main()
{

st.top =-1;
int choice,value;
while(choice==1)
{
printf(" 1 Push \n");
printf(" 2 Pop \n");
printf(" 3 Display \n")
scanf("%d",&choice)

switch(choice)
{
case 1 :
printf("Enter the element in stack")
scanf("%d",&value)
push(value);
break;


case 2:
value=pop;
if(value != -1)
printf("The deleted item is");
break;

case 3: 
Display();
break;
{
printf("Do you want  to continue (1/0));
scanf("%d",choice);
}

}


}

}
