//牛客110B-数组重排 
#include<bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    scanf("%d", &t);
    
    while(t--) 
    {
        int n;
        scanf("%d", &n);
        vector<long long> a(n);
        
        for(int i = 0; i < n; i++) 
        {
            scanf("%lld", &a[i]);
        }
        
        sort(a.begin(), a.end());
        long long sum = 0;
        // 最大的n-2个元素各加2次
        for(int i = n-1; i >= 2; i--) 
        {
            sum += 2 * a[i];
        }
        // 最小的2个元素各加1次
        sum += a[0] + a[1];
        printf("%lld\n", sum);
    }
    return 0;
}
