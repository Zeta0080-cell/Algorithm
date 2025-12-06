//牛客联赛1 - A  
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    
    // 动态分配大小为 n-1 的数组
    vector<int> a(n - 1);
    
    // 读入数据
    for(int i = 0; i < n - 1; i++)
    {
        cin >> a[i];
    }
    
    // 排序
    sort(a.begin(), a.end());
    
    // 查找丢失的数字
    int missing = n;  // 默认假设丢失的是最后一个碗
    for(int i = 0; i < n - 1; i++)
    {
        if(a[i] != i + 1)
        {
            missing = i + 1;
            break;
        }
    }
    
    // 输出结果
    cout << missing << endl;
    
    return 0;
}
