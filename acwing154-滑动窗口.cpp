//acwing154-滑动窗口
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
		cin>>a[i];//读入 
	}
	deque<int> q;//声明一个队列
	for(int i=1;i<=n;i++)
	{
		while(q.size()&&q.back()>a[i])//新进入窗口的值小于队尾元素，则队尾出列
		{
			q.pop_back();	
		} 
		q.push_back(a[i]);//将新进入的元素入队
		if(i-k>=1&&q.front()==a[i-k])//若队头是否滑出了窗口，队头出队
		{
			q.pop_front();	
		} 
		if(i>=k)//当窗口形成，输出队头对应的值
		{
			printf("%d ",q.front());	
		} 
	} 
	q.clear();
	printf("\n");
	//最大值亦然
    for(int i = 1; i <= n; i++)
    {
        while(q.size() && q.back() < a[i]) q.pop_back();
        q.push_back(a[i]);
        if(i - k >= 1 && a[i - k] == q.front()) q.pop_front(); 
        if(i >= k) cout << q.front() << " ";
    }
	return 0;
} 
