//acwing788-��������������Σ� 
#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
const int N=1e6;

int n;
int q[N];
int tmp[N];

LL solve(int q[],int l,int r)
{
	if(l>=r)
	{
		return 0;
	}
	int mid=l+r>>1;
	LL res=solve(q,l,mid)+solve(q,mid+1,r);
	//�鲢�Ĺ���
	int k=0;
	int i=l;
	int j=mid+1;
	while(i<=mid&&j<=r)
	{
		if(q[i]<=q[j])
		{
			tmp[k++]=q[i++];	
		}	
		else
		{
			tmp[k++]=q[j++];
			res+=mid-i+1;//ÿһ��ѭ�������㶼�� 
		}
	} 
	while(i<=mid) tmp[k++]=q[i++];
	while(j<=r) tmp[k++]=q[j++];
	for(int i=l,j=0;i<=r;i++,j++)
	{
		q[i]=tmp[j];
	}
	return res;
}

int main()
{
	int n;
	long long result;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		scanf("%d",&q[i]);
	}
	result=solve(q,0,n-1);
	printf("%lld",result);
	return 0;
}
