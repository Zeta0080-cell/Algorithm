//数据结构-删除最小元素
#include<bits/stdc++.h>
#define MAXSIZE 100
using namespace std;
typedef int ElemType;
typedef struct SqList{
	ElemType data[MAXSIZE];
	int length;
}SqList; 

SqList* initlist()
{
	SqList *L=(SqList*)malloc(sizeof(SqList));
	L->length=0;
	return L;
}

int main()
{
	int n,min;
	SqList *L;
	L=initlist();
	cin>>n;
	for(int i=0;i<n;i++)
	{
		scanf("%d",&L->data[i]);
	}
	min=L->data[0];
	for(int i=0;i<n;i++)
	{
		if(L->data[i]<min)
		{
			min=L->data[i];//拿到最小值 
		}
	}
	for(int i=0;i<n;i++)
	{
		printf("%d ",L->data[i]);
	}
	printf("\n");
	for(int i=0;i<n;i++)
	{
		if(L->data[i]!=min)
		{
			printf("%d ",L->data[i]);
		}
	}
	return 0;
}
