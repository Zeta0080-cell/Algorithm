//代码模版-简单选择排序3 
#include<bits/stdc++.h>
using namespace std;
const int N=1e3;

void selectSort(int a[],int n)
{
	int temp;
	int mini;
	for(int i=0;i<n-1;i++)
	{
		mini=i;
		for(int j=i+1;j<n;j++)
		{
			if(a[j]<a[mini])
			{
				mini=j;
			}
		}
		temp = a[i]; 
		a[i] = a[mini]; 
		a[mini] = temp; 
		for(int k=0;k<n;k++)
		{
			printf("%d ",a[k]);
		}
		printf("\n");
	}
}

int main()
{
	int n;
	cin>>n;
	int a[N];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	selectSort(a,n);
	return 0;
}
