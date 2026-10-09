#include<stdio.h>
#define MAX 5
int stack[MAX];
int top=-1;
void push(int num)
{
    
    if(top==MAX-1)
    {
        printf("Stack Overflow");
    }
    else
    {
        top+=1;
        stack[top]=num;
        printf("%d is pushed\n",stack[top]);
    }
}
void pop()
{
    if(top==-1)
    {
        printf("Stack Underflow");
    }
    else
    {
        printf("%d is poped\n",stack[top]);
        top-=1;
    }
}
int main()
{
    push(10);
    push(20);
    push(30);
    pop();
    return 0;
}