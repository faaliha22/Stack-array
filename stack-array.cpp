#include<stdio.h>
#include<stdlib.h>

//stack using array
#define MAX 6
int stack[MAX],top = -1;

//overflow
int isfull()
{
	if(top == MAX-1)
	return 1;
	
	else
	return 0;
}

//underflow
int isempty()
{
	if(top == -1)
	return 1;
	
	else
	return 0;
}

//push
void push(int value)
{
	if(!isfull())
	{
		stack[top] = value;
		top++;
		printf("%d pushed\n",value);
	}
}

//pop
void pop()
{   int del;
	if(!isempty())
	{
		del = stack[top];	
		top=top-1;
	
	}
	printf("%d deleted\n",del);
}

//peek
void peek()
{   
    int p;
	if(!isempty())
	{
		p = stack[top-1];
		printf("%d is the top value\n",p);
	}
		
}

//display
void display()
{
	if(!isempty())
	{  printf("displaying\n");
		for(int i=top;i>=-1;i--)
		{
			printf("%d\n",stack[i]);
		}
	}
}

int main()
{   push(12);
	push(22);
	push(7);
	push(30);
	push(4);
	push(44);	
	display();
	peek();
	pop();
	pop();
	display();
	

}


