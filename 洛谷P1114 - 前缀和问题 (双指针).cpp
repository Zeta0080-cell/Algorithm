// 洛谷P1114 - 前缀和问题 (双指针) 
#include<bits/stdc++.h>
using namespace std;
const int N = 1e6;

int main()
{
    int n;
    int a[N];
    int s[N];
    int result = 0;
    int cnt_1 = 0; // 用于记录区间中1的个数

    cin >> n;
    for(int i = 1; i <= n; i ++)
    {
        scanf("%d",&a[i]);   
    }

    // 计算前缀和数组 s，s[i] 表示前 i 个人中男生的个数
    s[0] = 0;
    for(int i = 1; i <= n; i ++)
    {
        s[i] = s[i - 1] + a[i];
    }

    // 双指针枚举所有可能的子区间
    for(int i = 1; i <= n; i ++)
    {
        for(int j = i; j <= n; j ++)
        {
            // 区间[i,j]中男生的数量
            int male_count = s[j] - s[i - 1];
            // 区间[i,j]的总人数
            int total_count = j - i + 1;
            // 如果男生数量等于女生数量
            if(male_count * 2 == total_count)
            {
                result = max(result, total_count);
            }
        }
    }

    cout << result << endl;
    return 0;
}
