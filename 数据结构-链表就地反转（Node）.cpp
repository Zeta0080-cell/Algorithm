//数据结构-链表就地反转（Node）
#include<bits/stdc++.h>
using namespace std;
typedef int ElemType;
typedef struct Node{
	ElemType data;
	struct Node *next;
}Node;   

Node* initlist()
{
	Node *head=(Node*)malloc(sizeof(Node));
	head->data=0;
	head->next=NULL;
	return head;
}

void nodelist(Node *L)
{
	Node *p=L->next;
	while(p!=NULL)
	{
		printf("%d ",p->data);
		p=p->next;
	}
	printf("\n");
}

int insertNode(Node *L,int pos,ElemType e)
{
	int i=0;
	Node *p=L;
	while(i<pos-1)
	{
		p=p->next;
		i++;
		if(p==NULL)
		{
			return 0;
		}
	}
	Node *q=(Node*)malloc(sizeof(Node));
	q->data=e;
	q->next=p->next;
	p->next=q;
}

Node* reverselist(Node *head)
{
	Node *first=NULL;
	Node *second=head->next;
	Node *third;
	while(second!=NULL)
	{
		third=second->next;
		second->next=first;//实现反转 
		first=second;
		second=third;//迭代 
	}
	Node *hd=initlist();
	hd->next=first;
	return hd;
}

int main()
{
	Node *list=initlist();
	insertNode(list,1,1);
	insertNode(list,2,2);
	insertNode(list,3,3);
	insertNode(list,4,4);
	insertNode(list,5,5);
	nodelist(list);
	Node *reverse=reverselist(list);
	nodelist(reverse);
	return 0;
}
