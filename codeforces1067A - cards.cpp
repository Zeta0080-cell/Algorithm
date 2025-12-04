//codeforces1067A - cards
#include<bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    scanf("%d", &t);
    
    while (t--) 
	{
        int n, y, r;
        scanf("%d", &n);
        scanf("%d %d", &y, &r);
        
        // 红卡禁赛的人数
        int red_suspended = r;
        // 剩余球员
        int remaining = n - red_suspended;
        if (remaining < 0) remaining = 0;
        
        // 黄卡能禁赛的人数
        int yellow_suspended = y / 2;
        
        // 总禁赛人数
        int total_suspended = red_suspended;
        if (yellow_suspended > remaining) 
		{
            total_suspended += remaining;
        } 
		else 
		{
            total_suspended += yellow_suspended;
        }
        
        printf("%d\n", total_suspended);
    }
    
    return 0;
}
