//ţ��110B-�������� 
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
        // ����n-2��Ԫ�ظ���2��
        for(int i = n-1; i >= 2; i--) 
        {
            sum += 2 * a[i];
        }
        // ��С��2��Ԫ�ظ���1��
        sum += a[0] + a[1];
        printf("%lld\n", sum);
    }
    return 0;
}
