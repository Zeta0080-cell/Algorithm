//acwing-768第k个数（快速排序算法） 
#include<bits/stdc++.h>
using namespace std;
const int N=1e5;

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
	int k;
	int a[N];
	int key;
	cin>>n; cin>>k;
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);	
	} 
	quickSort(a,0,n-1);
	key=k-1;
	printf("%d",a[key]);
	return 0;
}
