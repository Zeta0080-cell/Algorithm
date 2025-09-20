//洛谷P1059-明明的随机数
#include<bits/stdc++.h>
using namespace std;
const int N=1e3;
int a[N],tmp[N];

void mergesort(int a[],int l,int r)
{
	int k=0;
	if(l>=r) return;
	int mid=(l+r)/2;
	mergesort(a,l,mid);
	mergesort(a,mid+1,r);
	int i=l,j=mid+1;
	while(i<=mid&&j<=r)
	{
		if(a[i]<a[j])
		{
			tmp[k++]=a[i++];
		}
		else
		{
			tmp[k++]=a[j++];
		}
	}
	while(i<=mid)
	{
		tmp[k++]=a[i++];
	}
	while(j<=r)
	{
		tmp[k++]=a[j++];
	}
	for(i=l,j=0;i<=r;i++,j++)
	{
		a[i]=tmp[j];
	}
} 

int main()
{
	int n,count=0;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]); 
	}
	mergesort(a,0,n-1);
	n=unique(a,a+n)-a;
	printf("%d\n",n);
	for(int i=0;i<n;i++)
	{
			printf("%d ",a[i]);
	}
	return 0;
}
