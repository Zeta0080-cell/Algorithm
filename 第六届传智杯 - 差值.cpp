//第六届传智杯 - 差值 
#include<bits/stdc++.h>
using namespace std;
const int N = 1e5;


int main()
{
    int n;
    int a[N];
    
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    
    // 排序后相邻元素的差值最小
    sort(a, a + n);
    
    int min_diff = INT_MAX;
    for(int i = 1; i < n; i++)
    {
        int diff = a[i] - a[i-1];
        if(diff < min_diff)
        {
            min_diff = diff;
        }
    }
    
    printf("%d", min_diff);
    return 0;
}
