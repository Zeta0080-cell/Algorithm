//编程实验4-队列元素逆置
#include<bits/stdc++.h>
#define MAXSIZE 100
using namespace std;
typedef int ElemType;
typedef struct Stack{
	ElemType data[MAXSIZE];
	int top;//栈顶指针 
}Stack; 
typedef struct Queue{
	ElemType data[MAXSIZE];
	int front;//队头 
	int rear;//队尾 
}Queue;

Stack* initStack()
{
	Stack *s=(Stack*)malloc(sizeof(Stack));
	s->top=-1;//栈顶初始化 
}

Queue* initQueue()
{
	Queue *q=(Queue*)malloc(sizeof(Queue));
	q->front=0;
	q->rear=0;
}

void enqueue(Queue *Q,ElemType e)//入队操作,队尾增加 
{
	Q->data[Q->rear]=e;
	Q->rear++;	
} 

ElemType dequeue(Queue *Q)
{
	ElemType e;
	e=Q->data[Q->front];//取队头的元素
	Q->front++;	
	return e;
} 

void push(Stack *s,ElemType e)
{
	s->top++;
	s->data[s->top]=e;
}

void pop(Stack *s,ElemType *e)
{
	*e=s->data[s->top];
	s->top--;	
}

int main()
{
	int n;
	ElemType e;
	cin>>n;//输入队列中元素的个数
	Queue *q=initQueue();
	Stack *s=initStack();
	for(int i=0;i<n;i++)
	{
		cin>>e;
		enqueue(q,e);//增加队列中的元素 
	} 
	for(int i=0;i<n;i++)
	{
		e=dequeue(q);
		push(s,e);
	}
	for(int i=0;i<n;i++)
	{
		pop(s,&e);
		printf("%d ",e);
	}
	return 0;
}
