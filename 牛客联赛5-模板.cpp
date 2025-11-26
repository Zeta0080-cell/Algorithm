//牛客联赛5-模板 
#include<bits/stdc++.h>
using namespace std;

int main()
{
    //预处理
    int n,m;
    int result = 0;
    string s1,s2;
    cin >> n >> m;
    cin >> s1;
    cin >> s2;
    
    //算法执行
    if(n == m)
    {
        for(int i = 0; i < n; i ++)
        {
            if(s1[i] != s2[i])
            {
                result ++;
            }
        }
    }
    else if(n > m)
    {
        int tmp = n - m; //先变成长度相同的
        result += tmp;
        for(int i = 0; i < m; i ++)
        {
            if(s1[i] != s2[i])
            {
                result ++;
            }
        }
    }
    else
    {
        int tmp = m - n; //先变成长度相同的
        result += tmp;
        for(int i = 0; i < n; i ++)
        {
            if(s1[i] != s2[i])
            {
                result ++;
            }
        }
    }
    
    printf("%d",result);
    return 0;
}
