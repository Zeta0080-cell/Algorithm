//计算机挑战赛-A 
#include<bits/stdc++.h>
using namespace std;
const int MAXN = 1e6 + 10;  // 根据题目要求调整数组大小

int main()
{
    int n, k;
    int a[MAXN];
    
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cin >> k;
    
    // 处理完整的分组
    for(int i = 0; i < n - n % k; i += k)
    {
        // 解密操作：向右循环移动1位（加密是向左，解密就是向右）
        int first = a[i + k - 1];  // 保存最后一个元素
        
        // 将元素向右移动
        for(int j = k - 1; j > 0; j--)
        {
            a[i + j] = a[i + j - 1];
        }
        
        a[i] = first;  // 将原最后一个元素放到第一个位置
    }
    
    // 输出结果
    for(int i = 0; i < n; i++)
    {
        cout << a[i];
        if(i != n - 1) cout << " ";
    }
    cout << endl;
    
    return 0;
}
