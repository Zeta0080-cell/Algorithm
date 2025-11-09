//计挑赛模拟A-分级平均数 
#include<bits/stdc++.h>
using namespace std;
const int N = 1e3;

double Average(double a[], int n)
{
    double max_score = a[1];
    double min_score = a[1];
    double sum = 0;
    
    // 找出最高分和最低分，并计算总和
    for(int i = 1; i <= n; i++)
    {
        sum += a[i];
        if(a[i] > max_score) max_score = a[i];
        if(a[i] < min_score) min_score = a[i];
    }
    
    // 去掉一个最高分和一个最低分
    sum = sum - max_score - min_score;
    
    // 计算平均分（剩下 n-2 个分数）
    return sum / (n - 2);
}

int main()
{
    int n;
    scanf("%d", &n);
    
    int index = 3; // 数组下标
    double result;
    double a[N];
    
    // 读取前两位评委的分数
    for(int i = 1; i <= 2; i++)
    {
        scanf("%lf", &a[i]);
    }
    
    // 从第三位评委开始处理
    while(index <= n)
    {
        scanf("%lf", &a[index]);
        result = Average(a, index);
        printf("%.2f\n", result);  // 保留两位小数
        index++;
    }
    return 0;
}
