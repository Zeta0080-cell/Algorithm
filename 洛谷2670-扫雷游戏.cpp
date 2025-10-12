//洛谷2670-扫雷游戏
#include<bits/stdc++.h>
using namespace std;
const int N = 105; 

int main()
{
    int n, m;
    char a[N][N], result[N][N];
    cin >> n >> m;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            cin >> a[i][j];
            result[i][j] = a[i][j]; // 初始化结果数组
        }
    }
    
    // 处理每个格子
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            if(a[i][j] == '?')
            {
                int count = 0;
                // 检查周围的8个方向
                for(int k = i - 1; k <= i + 1; k++)
                {
                    for(int l = j - 1; l <= j + 1; l++)
                    {
                        // 确保在边界内且不是当前格子本身
                        if(k >= 0 && k < n && l >= 0 && l < m && !(k == i && l == j))
                        {
                            if(a[k][l] == '*')
                            {
                                count++;
                            }
                        }
                    }
                }
                // 将数字转换为字符
                result[i][j] = count + '0';
            }
        }
    }
    
    // 输出结果
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            cout << result[i][j];
        }
        cout << endl;
    }
    
    return 0;
}
