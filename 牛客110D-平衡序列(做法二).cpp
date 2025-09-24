//牛客110D-平衡序列(做法二)
#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main() 
{
    int t;
    scanf("%d", &t);
    while(t--) 
    {
        int n;
        scanf("%d", &n);
        vector<ll> a(n);
        
        for(int i = 0; i < n; i++) 
        {
            scanf("%lld", &a[i]);
        }
        sort(a.begin(), a.end());
        
        // 情况1：删除最小元素（第一个）
        ll balance1 = 0;
        int m = n - 1;
        int mid1; // 新序列的中位数下标
        if(m % 2 == 1) 
        {
            mid1 = m / 2;
        } 
        else 
        {
            mid1 = m / 2 - 1;
        }
        // 由于删除的是第一个元素，新序列就是a[1]到a[n-1]
        // 中位数在新序列中的位置mid1对应原序列的位置是mid1+1
        ll median1 = a[mid1 + 1];
        for(int i = 1; i < n; i++) 
        {
            balance1 += abs(a[i] - median1);
        }
        // 情况2：删除最大元素（最后一个）
        ll balance2 = 0;
        int mid2; // 新序列的中位数下标
        if(m % 2 == 1) 
        {
            mid2 = m / 2;
        } 
        else 
        {
            mid2 = m / 2 - 1;
        }
        // 由于删除的是最后一个元素，新序列就是a[0]到a[n-2]
        // 中位数在新序列中的位置mid2对应原序列的位置就是mid2
        ll median2 = a[mid2];
        for(int i = 0; i < n - 1; i++) 
        {
            balance2 += abs(a[i] - median2);
        }
        printf("%lld\n", min(balance1, balance2));
    }
    return 0;
}
