//牛客110D-平衡序列(self过一半) 
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

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
        if(n == 2) 
        {
            printf("0\n");
            continue;
        }
        sort(a.begin(), a.end());
        vector<ll> b;  
        for(int i = 0; i < n; i++)
        {
            vector<ll> c;  
            for(int j = 0; j < n; j++) 
            {
                if(j != i) 
                {
                    c.push_back(a[j]);
                }
            }
            int new_n = n - 1;
            int mid = (new_n - 1) / 2;  // 下中位数位置
            ll result = 0;
            for(int k = 0; k < new_n; k++)
            {
                result += abs(c[k] - c[mid]);
            }
            b.push_back(result);
        }
        ll min_balance = *min_element(b.begin(), b.end());  
        printf("%lld\n", min_balance);
    }
    return 0;
}
