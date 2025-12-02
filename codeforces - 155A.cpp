//codeforces - 155A
#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;

int main()
{
    int n;
    int a[N];
    cin >> n;
    for(int i = 0; i < n; i ++)
    {
        scanf("%d",&a[i]);
    }
    
    int max = a[0], min = a[0];
    int ans = 0;
    
    for(int i = 1; i < n; i ++)  // 从第二个开始检查
    {
        if(a[i] > max)
        {
            max = a[i];
            ans++;
        }
        else if(a[i] < min)      // 用 else if 避免同时满足两个条件时重复计数
        {
            min = a[i];
            ans++;
        }
    }
    
    printf("%d",ans);
    return 0;
}
