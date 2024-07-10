#include<stdio.h>
#include<stdlib.h>
#define max 100
typedef struct{
int items[100];
int top;
}
stack;
void initialize(stack*s)
{
s->top=-1;
}
int isfull(stack*s)
{
return s->top== max-1;
}
void push(stack*s,int items)
{
if (isfull(s))
{
printf("stack is overflow");
return;
}
s->items[++(s->top)]=items;
printf("pushed %d to stack\n",items);
}
void display(stack*s)
{
if(s->top==-1)
{
printf("stack is empty");
return;
}
printf("stack:");
for(int i=0;i=0;i<=s->top;i++)
{
printf("\n");
}
}
int main()
{
stack s;
initialize(&s);
push(&s,1);
push(&s,2);
push(&s,3);
display(&s);
return 0;
}






















