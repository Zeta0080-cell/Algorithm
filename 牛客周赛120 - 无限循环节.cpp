//牛客周赛120 - 无限循环节
#include<bits/stdc++.h>
using namespace std;

int lcm(int x,int y)
{
	return x / _gcd(x,y) * y;
}

void solve()
{
	int m,n;
	cin >> n >> m;
	int k = lcm(n,m);
	string a,b;
	cin >> a >> b;
	string c,d;
	for(int i = 0; i < k; i ++)
	{
		c += a;
	}
	for(int i = 0; i < k; i ++)
	{
		d += b;
	}
	
	string ans;
	int s = 0;
	if(c < d)
	{
		s = -1;
	}
	for(int i = k - 1; i >= 0; i ++)
	{
		int cur = (c[i] - '0') + s - (d[i] - '0');
		if(cur < 0)
		{
			cur += 10;	
		} 
		else
		{
			s = 0;
		}
		ans += (cur + '0');
	}
	reverse(ans.begin(), ans.end());
	printf("%d",ans.size());
	return 0;
}
