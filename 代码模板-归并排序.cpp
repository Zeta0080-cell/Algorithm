//代码模板-归并排序
#include<bits/stdc++.h>
using namespace std;
const int N = 1e3;

int n;
int a[N],tmp[N];

void mergesort(int a[],int l,int r)
{
	if(l >= r)
	{
		return;
	}
	int mid = l + r >> 1;//取中位数
	
	//优先归处理 
	mergesort(a,l,mid);
	mergesort(a,mid + 1,r);
	
	//定义三个指针 
	int k = 0, i = l, j = mid + 1;
	
	//step1：将a数组从中间切开，并扫描完一个部分，留下另一个部分 
	while(i <= mid && j <= r)
	{
		if(a[i] <= a[j])
		{
			tmp[k++] = a[i++];
		}	
		else
		{
			tmp[k++] = a[j++];
		}
	}	
	
	//step2:处理剩余的元素
	while(i <= mid)
	{
		tmp[k++] = a[i++];	
	} 
	while(j <= r)
	{
		tmp[k++] = a[j++];
	}
	
	//tmp数组覆盖a数组 
	for(int i = l,j = 0; i <= r; i ++,j ++)
	{
		a[i] = tmp[j];
	}
}

int main()
{
	cin >> n;
	for(int i = 0; i < n; i ++)
	{
		scanf("%d",&a[i]);
	}
	mergesort(a, 0 , n - 1);
	for(int i = 0; i < n; i ++)
	{
		printf("%d ",a[i]);
	}
	return 0;
} 
