//acwing3302-���ʽ��ֵ
#include<bits/stdc++.h>
using namespace std;
stack<int> num;
stack<char>op;
unordered_map<char, int> h{ {'+', 1}, {'-', 1}, {'*',2}, {'/', 2} };

void eval()//��ֵ
{
	int a=num.top();//�ڶ���������
	num.pop();
	int b=num.top();//��һ��������
	num.pop();
	char p=op.top();//�����
	op.pop();
	int r=0;
	if(p=='+')
	{
		r=b+a;	
	}	
	if(p=='-')
	{
		r=b-a;
	}
	if(p=='*')
	{
		r=b*a;
	}
	if(p=='/')
	{
		r=b/a;
	}
	num.push(r);//�����ջ 
} 

int main()
{	
	string s;//������ʽ
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        if (isdigit(s[i]))//������ջ
        {
            int x = 0, j = i;//��������
            while (j < s.size() && isdigit(s[j]))
            {
                x = x * 10 + s[j] - '0';
                j++;
            }
            num.push(x);//������ջ
            i = j - 1;
        }
        //�����������ȼ���ֱ����ջ
        else if (s[i] == '(')//��������ջ
        {
            op.push(s[i]);
        }
        //�������⣬����������ֱ����ջ�����������ż������������
        else if (s[i] == ')')//������
        {
            while(op.top() != '(')//һֱ���㵽������
                eval();
            op.pop();//�����ų�ջ
        }
        else
        {
            while (op.size() && h[op.top()] >= h[s[i]])//����ջ��������ȼ��ͣ����ȼ���
                eval();
            op.push(s[i]);//��������ջ
        }
    }
    while (op.size()) eval();//ʣ��Ľ��м���
    cout << num.top() << endl;//������
	return 0;
} 
