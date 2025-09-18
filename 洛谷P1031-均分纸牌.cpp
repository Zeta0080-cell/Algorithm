//洛谷P1031-均分纸牌
#include<bits/stdc++.h>
using namespace std;
const int N = 1e3;

int main() 
{
    int n, sum = 0, average;
    int count = 0;
    int a[N];
    
    cin >> n;
    for(int i = 0; i < n; i++) 
	{
        scanf("%d", &a[i]);
        sum += a[i];
    }
    average = sum / n;
    
    // 从左到右处理每堆纸牌
    for(int i = 0; i < n - 1; i++) 
	{
        if(a[i] != average) 
		{
            // 计算需要移动的牌数
            int move = a[i] - average;
            // 将多余的牌给下一堆，或者从下一堆拿牌
            a[i + 1] += move;
            // 移动一次
            count++;
        }
    }
    printf("%d", count);
    return 0;
}
