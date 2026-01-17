// 洛谷P1114 - 前缀和问题（映射思路） 
#include<bits/stdc++.h>
using namespace std;
const int N = 1e6;

int main()
{
    int n;
    int a[N];
    int s[N]; // 前缀和数组，存储转换后的值（1和-1的和）
    int result = 0;
    
    cin >> n;
    for(int i = 1; i <= n; i ++)
    {
        scanf("%d", &a[i]);   
    }
    
    // 初始化前缀和数组
    // 注意：这里我们将男生(1)视为+1，女生(0)视为-1
    s[0] = 0;
    for(int i = 1; i <= n; i ++)
    {
        // 将0转换为-1，1保持为1
        int value = (a[i] == 0) ? -1 : 1;
        s[i] = s[i - 1] + value;
    }
    
    // 使用哈希表记录每个前缀和第一次出现的位置
    unordered_map<int, int> first_pos;
    first_pos[0] = 0; // 前缀和为0的位置是0
    
    for(int i = 1; i <= n; i ++)
    {
        // 如果当前前缀和在哈希表中出现过
        if(first_pos.find(s[i]) != first_pos.end())
        {
            // 从第一次出现的位置+1到i的区间，男女数量相等
            int length = i - first_pos[s[i]];
            result = max(result, length);
        }
        else
        {
            // 记录这个前缀和第一次出现的位置
            first_pos[s[i]] = i;
        }
    }
    
    cout << result << endl;
    return 0;
}
