//洛谷P2461-递归数列
#include<bits/stdc++.h>
using namespace std;
const int N = 1e3;

int main()
{
	int k;
	int a[N] = {0},b[N],c[N];
	int m,n,p;
	int result = 0,sum = 0;
	
	//预处理 
	cin >> k;
	for(int i = 1; i <= k; i++) 
	{
    	cin >> b[i];
	}
	for(int i = 1; i <= k; i++) 
	{
    	cin >> c[i];
	}
	cin >> m >> n >> p;
	
	//拿到数组a 
	for(int i = 1; i <= k; i++) 
    {
        a[i] = b[i] % p;
    }
    
    // 如果需要，计算从k+1到n的所有值
    for(int i = k + 1; i <= n; i++) 
    {
        a[i] = 0;
        for(int j = 1; j <= k; j++) 
        {
            a[i] = (a[i] + 1LL * c[j] * a[i - j]) % p;
        }
    }
	
	//计算结果 
	for(int i = m; i <= n ; i ++)
	{
		sum += a[i];
	}
	result = sum % p;
	printf("%d",result);
	return 0;
} 
