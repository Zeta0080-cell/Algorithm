//Å£¿ÍÖÜÈü120 - C
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,m;
	int ans = 1;
	cin >> n >> m;
	if(n > m)
	{
		swap(n,m);
	}
	if(n == 1)
	{
		ans = 1;
	}
	else if(n == 2)
	{
		ans += (m - 1) / 2;
	}
	else if(n >= 3)
	{
		ans = m * n;
	}
	else if(n == 3 && m == 3)
	{
		ans = 8;
	}
	printf("%d",ans);
	return 0;
} 
