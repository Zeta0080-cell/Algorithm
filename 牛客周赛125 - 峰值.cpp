// 牛客周赛125 - 峰值 
#include<bits/stdc++.h>
using namespace std;
const int N = 1e3;

int main()
{
    // 预处理
    int t;
    int n;
    int a[N];
    cin >> t;
    while(t --)
    {
        cin >> n;
        for(int i = 1; i <= n; i ++)
        {
            scanf("%d",&a[i]);
        }
        
        // 扫描
        for(int i = 1; i <= n; i ++)
        {
            if(a[i] > a[i + 1] && a[i] > a[i - 1])  // 判断条件,寻找峰值                                                                                                              
            {
                a[i] --;
            }
        }
        
        for(int i = 1; i <= n; i ++)
        {
            printf("%d ".a[i]);
        }
    }
    return 0;
}
