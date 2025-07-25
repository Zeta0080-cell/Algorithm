//acwing827-双链表
#include<bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;  // 定义链表的最大容量
int e[N], r[N], l[N], idx; 
// e[] 用来存储节点的数值
// r[] 用来存储节点的后继(右边节点的下标)
// l[] 用来存储节点的前驱(左边节点的下标)
// idx 用来记录当前可用的节点下标

// 初始化函数
void init() 
{
    r[0] = 1;    // 0号节点是头节点，初始时它的后继是1号节点(尾节点)
    l[1] = 0;     // 1号节点是尾节点，初始时它的前驱是0号节点(头节点)
    idx = 2;      // 已经使用了0和1两个节点，所以下一个可用下标从2开始
}

// 在k号节点的右边插入x
void add_to_right(int k, int x) 
{
    e[idx] = x;     // 存储新节点的值
    r[idx] = r[k];   // 新节点的后继是k节点的原后继
    l[idx] = k;      // 新节点的前驱是k节点
    
    l[r[k]] = idx;   // k节点原后继的前驱指向新节点
    r[k] = idx;      // k节点的后继更新为新节点
    
    idx++;           // 可用下标自增
}

// 在k号节点的左边插入x
void add_to_left(int k, int x) 
{
    // 实际上就是在k节点的前驱的右边插入x
    add_to_right(l[k], x);
}

// 删除k号节点
void remove(int k) 
{
    r[l[k]] = r[k];  // k前驱的后继指向k的后继
    l[r[k]] = l[k];  // k后继的前驱指向k的前驱
    // 这里不需要真正删除数据，因为后续操作会覆盖
}

// 在链表的最左端(头节点后)插入数x
void add_to_head(int x) 
{ 
    add_to_right(0, x);  // 0号节点是头节点
}

// 在链表的最右端(尾节点前)插入数x
void add_to_tail(int x) 
{
    add_to_right(l[1], x);  // 1号节点是尾节点
}

int main()
{
    int m;  // 操作次数
    
    init();  // 初始化链表

    scanf("%d", &m);
    while (m--)
    {
        string c;
        cin >> c;  // 读取操作类型

        if (c == "L")  // 在链表左端插入
        {
            int x;
            scanf("%d", &x);
            add_to_head(x);
        }
        else if (c == "R")  // 在链表右端插入
        {
            int x;
            scanf("%d", &x);
            add_to_tail(x);
        }
        else if (c == "D")  // 删除第k个插入的数
        {
            int k;
            scanf("%d", &k);
            remove(k + 1);  // 因为前两个节点(0和1)是头尾节点，所以实际数据从2开始
        } 
        else if (c == "IL")  // 在第k个插入的数左侧插入
        {
            int k, x;
            scanf("%d%d", &k, &x);
            add_to_left(k + 1, x);  // 同上，需要+1调整
        }
        else  // 在第k个插入的数右侧插入
        {
            int k, x;
            scanf("%d%d", &k, &x);
            add_to_right(k + 1, x);  // 同上，需要+1调整
        }
    }

    // 遍历链表并输出
    // 从头节点(0)的后继开始，直到遇到尾节点(1)
    for (int i = r[0]; i != 1; i = r[i])
    {
        printf("%d ", e[i]);
    }
    printf("\n");
    
    return 0;
} 
