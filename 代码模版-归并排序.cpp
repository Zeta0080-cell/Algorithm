//代码模版-归并排序 
#include<bits/stdc++.h>
using namespace std;
const int N=1e3;

int n;
int a[N],tmp[N];

void mergeSort(int a[],int l,int r)
{
	if(l>=r)
	{
		return;
	}
    int mid=l+r>>1;	//除以2运算，等价 
    mergeSort(a,l,mid);
    mergeSort(a,mid+1,r);//先递归处理
	int k=0,i=l,j=mid+1;
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
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	mergeSort(a,0,n-1);
	for(int i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
}
