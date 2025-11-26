//牛客联赛5-秀场
#include<bits/stdc++.h>
using namespace std;

const double PI = 3.141592653589793;

int main()
{
    int n, r, i, j;
    cin >> n >> r >> i >> j;
    
    // 计算边长：使用圆心角
    double edge = 2.0 * r * sin(PI / n);
    
    // 计算最短边数
    int diff = abs(i - j);
    int min_steps = min(diff, n - diff);
    
    // 计算结果
    double result = min_steps * edge;
    printf("%.6f", result);
    
    return 0;
} 
