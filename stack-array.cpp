#include<stdio.h>


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
{   
    printf("---MENU---\n");
    printf("\n1.Push\n2.Pop\n3.Peek\n4.Display\n5.Exit\n");

 int choice;
 
do{
    printf("Enter choice : ");
 scanf("%d",&choice);
 
 switch(choice)
 {
 case 1:
 {
 	printf("Enter value to insert : ");
 	int v;
 	scanf("%d",&v);
 	push(v);
    break;
}

case 2:
	pop();
	break;
	
case 3:
peek();
break;

case 4:
display();
break;

case 5:
return 0;
break;

default:
	printf("invalid");
	break;
	
	
}
}while(choice != 5);
	

}


