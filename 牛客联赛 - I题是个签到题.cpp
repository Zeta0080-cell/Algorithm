//牛客联赛5 - I题是个签到题 
#include<bits/stdc++.h>
using namespace std;
const int N = 1e3 + 10;

int main()
{
    //预处理
    int n,m;
    cin >> n >> m;
    vector<int> a;
    for(int i = 0; i < n ; i ++)
    {
        scanf("%d",&a[i]);
    }
    
    //算法执行
    int tmp = a[8];
    sort(a.begin(),a.end());
    int index = n - 3;
    if(tmp >= m * 0.8)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }
    
    if(tmp >= a[index])
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }
    return 0;
}
