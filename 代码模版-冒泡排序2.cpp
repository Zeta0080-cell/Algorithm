//´úÂëÄ£°æ-Ã°ÅİÅÅĞò2 
#include<bits/stdc++.h>
using namespace std;

void print(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n");
}

void bubbleSort(int a[],int n)
{
	int i,j,temp;
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				swap(a[j],a[j+1]);
			}
		}
	}
}

int main()
{
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d", &arr[i]); 
	}
	bubbleSort(arr, n); 
	return 0;
}
