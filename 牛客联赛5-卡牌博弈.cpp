//牛客联赛5-卡牌博弈
#include <stdio.h>

int main() 
{
    long long n;
    scanf("%lld", &n);
    
    // 判断 n 是否是 2 的幂
    if ((n & (n - 1)) == 0) 
    {
        printf("Alice\n");
    } 
    else 
    {
        printf("Bob\n");
    }
    
    return 0;
} 
