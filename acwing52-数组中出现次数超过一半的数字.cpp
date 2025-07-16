//acwing52-数组中出现次数超过一半的数字
#include<bits/stdc++.h>
using namespace std;
const int N=1e3;

int main()
{
	int n;
	int a[N];
	int b[N]={0};
	int len=0;
	int index;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		len++;
	}
	int half=len/2+1;
	for(int j=1;j<=n;j++)
	{
		b[a[j]]++;
	}
	for(int k=0;k<N;k++)
    {
        if(b[k]>half)
        {
            printf("%d",k);
            break;
        }
    }
	return 0;
} 
