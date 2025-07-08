//代码模版-快速排序
#include<bits/stdc++.h>
using namespace std;
const int  N=1e3;

void quickSort(int a[],int l,int r)
{
	if(l>=r) return;
	int x=a[(l+r)/2];
	int i=l-1;
	int j=r+1;//初始化
	while(i<j)
	{
	    do{
		    i++;
	    } while(a[i]<x);
	    do{
	    	j--;
	    }while(a[j]>x);
	    if(i<j) 
    	{
	        swap(a[i],a[j]);
	    }
	}
	quickSort(a,l,j);
	quickSort(a,j+1,r);
}

int main()
{
	int n;
	int a[N];
	cin>>n;
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	quickSort(a,0,n-1);
	for(int i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	printf("%d ",a[i]);
	return 0;
}
