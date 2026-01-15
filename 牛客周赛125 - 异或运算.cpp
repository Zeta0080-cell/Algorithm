// 牛客周赛125 - 异或运算
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    ll n,m;
    cin>>n>>m;
    string a,b;
    queue<int> A,B;
    cin>>a;
    cin>>b;
    for(ll i=0;i<n;i++)    A.push(a[i]-'0');
    for(ll i=0;i<m;i++)    B.push(b[i]-'0');
    while(A.size()&&B.size())
    {
        if(A.front()==B.front())
        {
            A.pop();
            B.pop();
        }
        else
        {
            int x=A.front();
            A.pop();
            A.front()=(A.front() ^ x);
        }
    }
    ll x=0;
    while(A.size())
    {
        x^=A.front();
        A.pop();
    }
    if(!x&&B.size()==0)
        cout<<"YES";
    else
        cout<<"NO";
    cout<<endl;
}
int main()
{
    ll t;
    t=1;
    cin>>t;
    while(t--)
        solve();
} 
