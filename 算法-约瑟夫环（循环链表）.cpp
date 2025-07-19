//算法-约瑟夫环（循环链表） 
#include<bits/stdc++.h>
using namespace std;
typedef int ElemType;
typedef struct Node{
	ElemType data;//数据域 
	struct Node *next;//指针域 
}Node;

void createlist(int n, int m) // 总共有n个人，报到m出局
{
    if (n <= 0 || m <= 0) {
        printf("Invalid input: n and m must be positive.\n");
        return;
    }

    // 创建循环链表（编号从1到n）
    Node *head = NULL;
    Node *p = NULL;
    for (int i = 1; i <= n; i++) {
        Node *q = (Node*)malloc(sizeof(Node));
        q->data = i;
        q->next = NULL;
        if (head == NULL) {
            head = q;
            p = head;
        } else {
            p->next = q;
            p = q;
        }
    }
    p->next = head; // 形成循环链表
    p = head;       // 从head开始报数

    while (p->next != p) // 循环直到只剩一个节点
    {
        // 报数到m-1，找到前驱节点r
        Node *r = NULL;
        for (int i = 1; i < m; i++) {
            r = p;
            p = p->next;
        }
        // 淘汰p节点
        printf("%d ", p->data);
        r->next = p->next; // 跳过p节点
        Node *temp = p;
        p = r->next;       // 从下一个节点继续
        free(temp);        // 释放被淘汰节点
    }

    // 输出最后剩下的节点
    printf("%d\n", p->data);
    free(p); // 释放最后一个节点
}

int main()
{
	int n,m;
	cin>>n>>m;
	createlist(n,m);
	return 0;
}
