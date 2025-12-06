//牛客联赛1 - B
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, x, a, b;
    cin >> n >> x >> a >> b;
    
    // 计算每个音符的期望分数
    double perfect_prob = x / 100.0;  // 转为小数概率
    double great_prob = 1.0 - perfect_prob;
    double each_expect = perfect_prob * a + great_prob * b;
    
    // n 个音符的总期望
    double total_expect = n * each_expect;
    
    // 保留两位小数输出
    cout << fixed << setprecision(2) << total_expect << endl;
    
    return 0;
} 
