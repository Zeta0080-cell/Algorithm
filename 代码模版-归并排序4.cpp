//代码模版-归并排序4
#include<bits/stdc++.h>
using namespace std;
const int N=1e6;
int a[N];
int tmp[N];

void mergeSort(int a[],int l,int r)
{
	if(l>=r)
	{
		return;
	}
	int mid=(l+r)/2;
	mergeSort(a,l,mid);
	mergeSort(a,mid+1,r);
	int i=l;
	int j=mid+1;
	int k=0;
	while(i<=mid&&j<=r)
	{
		if(a[i]<=a[j])
		{
			tmp[k++]=a[i++];
		}
		else
		{
			tmp[k++]=a[j++];
		}
	}
	while(i<=mid)//处理剩余的部分 
	{
		tmp[k++]=a[i++];
	}
	while(j<=r)
	{
		tmp[k++]=a[j++];
	}
	for(int i=l,j=0;i<=r;i++,j++)
	{
		a[i]=tmp[j];
	}
}

int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);//获得数组 
	}
	mergeSort(a,0,n-1);
	for(int i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
}
