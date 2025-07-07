//代码模版-高精度除法
#include<bits/stdc++.h>
using namespace std;

//商C，余r 
vector<int> div(vector<int> A, int b, int &r)  // r改为引用传递
{
    vector<int> C;
    r = 0;
    for(int i = A.size()-1; i >= 0; i--)
    {
        r = r*10 + A[i];
        C.push_back(r/b);
        r %= b;    
    } 
    reverse(C.begin(), C.end());
    while(C.size() > 1 && C.back() == 0)
    {
        C.pop_back();
    }
    return C;
} 

int main()
{
    string a;
    int b;
    cin >> a >> b;
    vector<int> A;
    for(int i = a.size()-1; i >= 0; i--)
    {
        A.push_back(a[i]-'0');
    }
    int r;
    vector<int> c = div(A, b, r);
    for(int i = c.size()-1; i >= 0; i--)  // 改为使用c而不是C
    {
        printf("%d", c[i]);
    }
    cout << endl << r << endl;
    return 0;
}
