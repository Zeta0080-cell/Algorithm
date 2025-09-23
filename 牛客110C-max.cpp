//Å£¿Í110C-max
#include<bits/stdc++.h>
using namespace std;

int check(const vector<long long>& a) 
{
    for(int i = 0; i < a.size(); i++) 
    {
        if(a[i] != 0) 
        {
            return 1;
        }
    }
    return 0;
}

int main() 
{
    int t;
    int max,flag,mex;
    int result;
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
        max=*max_element(a.begin(), a.end());
        flag=check(a);
        if(flag==0)
        {
            mex=1;
        }
        else
        {
            mex=0;
        }
        printf("%d\n",max-mex);
    }
    return 0;
} 
