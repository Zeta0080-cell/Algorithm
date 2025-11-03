//牛客周赛112-卡牌游戏 
#include<bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    scanf("%d", &t);
    while(t--) 
	{
        int n;
        scanf("%d", &n);
        vector<int> a(n);
        for(int i = 0; i < n; i++) 
		{
            scanf("%d", &a[i]);
        }
        sort(a.begin(), a.end());
        
        int ans = 0;
        for(int i = 0; i < n; i++) 
		{
            ans = max(ans, min(a[i], n - i));
        }
        printf("%d\n", ans);
    }
    return 0;
}
