//代码模版-高精度加法3
#include<bits/stdc++.h>
using namespace std;

vector<int> add(vector<int> A,vector<int> B)
{
	if(A.size()<B.size())
	{
		return add(B,A);
	}
	vector<int> C;
	int t=0;
	for(int i=0;i<A.size();i++)
	{
		t+=A[i];
		if (i < B.size()) t += B[i];
		C.push_back(t%10);
		t /= 10;//判断t是0还是1 
	} 
	if (t) C.push_back(t);
	return C;
}

int main()
{
	string a,b;
	vector<int> A,B;
	cin>>a>>b;
	for(int i=a.size();i>=0;i--)
	{
		A.push_back(a[i]-'0');	
	}	
	for(int i=b.size();i>=0;i--)
	{
		B.push_back(b[i]-'0');
	}
	vector<int> c=add(A,B);
	for(int i=c.size()-1;i>=0;i--)
    {
        printf("%d",c[i]);
    }
	return 0;
} 
