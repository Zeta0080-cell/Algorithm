// 牛客周赛124 - 签到题
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x,y;
    cin >> x >> y;
    if(x == y)
    {
        printf("Draw");
    }
    else if(x > y)
    {
        printf("Alice");
    }
    else
    {
        printf("Bob");
    }
    return 0;
} 
