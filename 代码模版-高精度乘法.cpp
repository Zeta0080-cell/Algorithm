//代码模版-高精度乘法
#include<bits/stdc++.h>
using namespace std;

vector<int> mul(vector<int> &a, int b)
{
    vector<int> c;
    int t=0;
    for(int i=0;i<a.size()||t;i++)
    {
        if(i<a.size())t+=a[i]*b;
        c.push_back(t%10);
        t/=10;
    }
    while(c.size()>1&&c.back()==0) c.pop_back();
    return c;
}

int main()
{
    string A;
    int b; 
    vector<int>a;
    cin>>A;
    cin>>b;
    for(int i=A.size()-1;i>=0;i--)
    {
        a.push_back(a[i]-'0');
    }
    vector<int> c=mul(a,b);
    for(int i=c.size()-1;i>=0;i--)
    {
        printf("%d",c[i]);
    }
    return 0;
}
