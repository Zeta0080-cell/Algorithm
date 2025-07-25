//acwing827-˫����
#include<bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;  // ����������������
int e[N], r[N], l[N], idx; 
// e[] �����洢�ڵ����ֵ
// r[] �����洢�ڵ�ĺ��(�ұ߽ڵ���±�)
// l[] �����洢�ڵ��ǰ��(��߽ڵ���±�)
// idx ������¼��ǰ���õĽڵ��±�

// ��ʼ������
void init() 
{
    r[0] = 1;    // 0�Žڵ���ͷ�ڵ㣬��ʼʱ���ĺ����1�Žڵ�(β�ڵ�)
    l[1] = 0;     // 1�Žڵ���β�ڵ㣬��ʼʱ����ǰ����0�Žڵ�(ͷ�ڵ�)
    idx = 2;      // �Ѿ�ʹ����0��1�����ڵ㣬������һ�������±��2��ʼ
}

// ��k�Žڵ���ұ߲���x
void add_to_right(int k, int x) 
{
    e[idx] = x;     // �洢�½ڵ��ֵ
    r[idx] = r[k];   // �½ڵ�ĺ����k�ڵ��ԭ���
    l[idx] = k;      // �½ڵ��ǰ����k�ڵ�
    
    l[r[k]] = idx;   // k�ڵ�ԭ��̵�ǰ��ָ���½ڵ�
    r[k] = idx;      // k�ڵ�ĺ�̸���Ϊ�½ڵ�
    
    idx++;           // �����±�����
}

// ��k�Žڵ����߲���x
void add_to_left(int k, int x) 
{
    // ʵ���Ͼ�����k�ڵ��ǰ�����ұ߲���x
    add_to_right(l[k], x);
}

// ɾ��k�Žڵ�
void remove(int k) 
{
    r[l[k]] = r[k];  // kǰ���ĺ��ָ��k�ĺ��
    l[r[k]] = l[k];  // k��̵�ǰ��ָ��k��ǰ��
    // ���ﲻ��Ҫ����ɾ�����ݣ���Ϊ���������Ḳ��
}

// ������������(ͷ�ڵ��)������x
void add_to_head(int x) 
{ 
    add_to_right(0, x);  // 0�Žڵ���ͷ�ڵ�
}

// ����������Ҷ�(β�ڵ�ǰ)������x
void add_to_tail(int x) 
{
    add_to_right(l[1], x);  // 1�Žڵ���β�ڵ�
}

int main()
{
    int m;  // ��������
    
    init();  // ��ʼ������

    scanf("%d", &m);
    while (m--)
    {
        string c;
        cin >> c;  // ��ȡ��������

        if (c == "L")  // ��������˲���
        {
            int x;
            scanf("%d", &x);
            add_to_head(x);
        }
        else if (c == "R")  // �������Ҷ˲���
        {
            int x;
            scanf("%d", &x);
            add_to_tail(x);
        }
        else if (c == "D")  // ɾ����k���������
        {
            int k;
            scanf("%d", &k);
            remove(k + 1);  // ��Ϊǰ�����ڵ�(0��1)��ͷβ�ڵ㣬����ʵ�����ݴ�2��ʼ
        } 
        else if (c == "IL")  // �ڵ�k���������������
        {
            int k, x;
            scanf("%d%d", &k, &x);
            add_to_left(k + 1, x);  // ͬ�ϣ���Ҫ+1����
        }
        else  // �ڵ�k����������Ҳ����
        {
            int k, x;
            scanf("%d%d", &k, &x);
            add_to_right(k + 1, x);  // ͬ�ϣ���Ҫ+1����
        }
    }

    // �����������
    // ��ͷ�ڵ�(0)�ĺ�̿�ʼ��ֱ������β�ڵ�(1)
    for (int i = r[0]; i != 1; i = r[i])
    {
        printf("%d ", e[i]);
    }
    printf("\n");
    
    return 0;
} 
