//洛谷P1029-最大公因数和最小公倍数 
#include<bits/stdc++.h>
using namespace std;

// 计算最大公约数
int gcd(int a, int b) 
{
    return b == 0 ? a : gcd(b, a % b);
}

// 计算最小公倍数
int lcm(int a, int b) 
{
    return a * b / gcd(a, b);
}

int main() 
{
    int x, y; // 最大公约数和最小公倍数
    int cnt = 0;
    scanf("%d%d", &x, &y);
    
    // 遍历所有可能的数对
    for (int i = x; i <= y; i += x) 
	{ // i必须是x的倍数
        if (y % i != 0) continue;     // i必须是y的约数
        
        int j = x * y / i;            // 根据 a × b = gcd × lcm
        if (j < x || j > y) continue; // j必须在合理范围内
        
        if (gcd(i, j) == x && lcm(i, j) == y) 
		{
            cnt++;
        }
    }
    
    printf("%d", cnt);
    return 0;
}
