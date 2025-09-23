//≈£øÕ110D-∆Ω∫‚–Ú¡–
#include<bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    scanf("%d", &t);
    while(t--) 
    {
        int n,mid1,mid2,sum=0;
        scanf("%d", &n);
        vector<long long> a(n);
        vector<long long> b(n);
        for(int i = 0; i < n; i++) 
        {
            scanf("%lld", &a[i]);
        }
        sort(a.begin(), a.end());
        if(n%2==0)
        {
            mid1=n/2-1;
        }
        else
        {
            mid1=n/2;
        }
        if(abs(a[mid1]-a[0])>abs(a[mid1]-a[n-1]))
        {
            for(int i=1;i<n;i++)
            {
                b[i]=a[i];
            }
            mid2=(n-1)/2;
            for(int i=1;i<n;i++)
            {
                sum+=abs(b[i]-b[mid2]);
            }
        }
        else
        {
            for(int i=0;i<n-1;i++)
            {
                b[i]=a[i];
            }
            mid2=(n-1)/2;
            for(int i=0;i<n-1;i++)
            {
                sum+=abs(b[i]-b[mid2]);
            }
        }
        printf("%d\n",sum);
    }
    return 0;
} 
