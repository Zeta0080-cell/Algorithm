//acwing154-��������
#include<bits/stdc++.h>
using namespace std;
const int N=1e6;
int a[N];

int main()
{
	int n,k;
	cin>>n>>K;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];//���� 
	}
	deque<int> q;//����һ������
	for(int i=1;i<=n;i++)
	{
		while(q.size()&&q.back()>a[i])//�½��봰�ڵ�ֵС�ڶ�βԪ�أ����β����
		{
			q.pop_back();	
		} 
		q.push_back(a[i]);//���½����Ԫ�����
		if(i-k>=1&&q.front()==a[i-k])//����ͷ�Ƿ񻬳��˴��ڣ���ͷ����
		{
			q.pop_front();	
		} 
		if(i>=k)//�������γɣ������ͷ��Ӧ��ֵ
		{
			printf("%d ",q.front());	
		} 
	} 
	q.clear();
	printf("\n");
	//���ֵ��Ȼ
    for(int i = 1; i <= n; i++)
    {
        while(q.size() && q.back() < a[i]) q.pop_back();
        q.push_back(a[i]);
        if(i - k >= 1 && a[i - k] == q.front()) q.pop_front(); 
        if(i >= k) cout << q.front() << " ";
    }
	return 0;
} 
