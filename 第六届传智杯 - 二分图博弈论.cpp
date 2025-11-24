//第六届传智杯 - 二分图博弈论
#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n, m;
    scanf("%lld%lld", &n, &m);
    
    if ((n * m) % 2 == 1) 
	{
        printf("akai\n");
    } 
	else 
	{
        printf("yukari\n");
    }
    return 0;
} 
