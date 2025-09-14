//codefoces1049-Another Divisibility Problem(±©Á¦) 
#include<bits/stdc++.h>
#define int long long
using namespace std;
int T;
int x;
void solve()
{
    cin>>x;
    for(int i=1,j=10;i<=1e9;i++)
    {
        if(i==j) j*=10;
        if((x*j+i)%(x+i)==0)
        {
            cout<<i<<endl;
        }
    }
}
signed main()
{
    cin>>T;
    while(T--)
    {
        solve();
    }
    return 0;
}

