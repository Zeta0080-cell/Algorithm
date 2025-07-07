//代码模版-高精度减法 
#include<bits/stdc++.h>
using namespace std;

bool cmp(vector<int> a,vector<int> b)
{
	if(a.size()>b.size())
	{
		return true;
	}
	else if(a.size()==b.size())
	{
		for(int i=a.size()-1;i>=0;i--)
		{
			if(a[i]<b[i])
			{
				return false;
			}
		}
		return true;
	}
	else if(a.size()<b.size())
	{
		return false;
	}
}

vector<int> sub(vector<int> a,vector<int> b)
{
	int t=0;
	vector<int> c;
	for(int i=0;i<a.size();i++)
	{
		t=a[i]-b[i]+10;
		c.push_back(t%10);
		t/=10;
	}
	while(c.size()>0)
	{
		if(c.back()==0)
		{
			c.pop_back();
		}
	}
	return c;
}

int main()
{
	string A,B;
	vector<int> a,b;
	cin>>A;
	cin>>B;
	for(int i=A.size()-1;i>=0;i--)
	{
		a.push_back(A[i]-'0');	
	}
	for(int i=B.size()-1;i>=0;i--)
	{
		b.push_back(B[i]-'0');
	}
	if(cmp(a,b))
	{
		vector<int> c=sub(a,b);
		for(int i=c.size()-1;i>=0;i--)
		{
			printf("%d",c[i]);
		}
	}
	else
	{
		vector<int> c=sub(a,b);
		printf("-");
		for(int i=c.size()-1;i>=0;i--)
		{
			printf("%d",c[i]);
		}
	}
	return 0;
}
