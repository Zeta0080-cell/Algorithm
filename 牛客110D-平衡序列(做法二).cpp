//ţ��110D-ƽ������(������)
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
        
        // ���1��ɾ����СԪ�أ���һ����
        ll balance1 = 0;
        int m = n - 1;
        int mid1; // �����е���λ���±�
        if(m % 2 == 1) 
        {
            mid1 = m / 2;
        } 
        else 
        {
            mid1 = m / 2 - 1;
        }
        // ����ɾ�����ǵ�һ��Ԫ�أ������о���a[1]��a[n-1]
        // ��λ�����������е�λ��mid1��Ӧԭ���е�λ����mid1+1
        ll median1 = a[mid1 + 1];
        for(int i = 1; i < n; i++) 
        {
            balance1 += abs(a[i] - median1);
        }
        // ���2��ɾ�����Ԫ�أ����һ����
        ll balance2 = 0;
        int mid2; // �����е���λ���±�
        if(m % 2 == 1) 
        {
            mid2 = m / 2;
        } 
        else 
        {
            mid2 = m / 2 - 1;
        }
        // ����ɾ���������һ��Ԫ�أ������о���a[0]��a[n-2]
        // ��λ�����������е�λ��mid2��Ӧԭ���е�λ�þ���mid2
        ll median2 = a[mid2];
        for(int i = 0; i < n - 1; i++) 
        {
            balance2 += abs(a[i] - median2);
        }
        printf("%lld\n", min(balance1, balance2));
    }
    return 0;
}
