//第六届传智杯 - 子串查找（模拟超时） 
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,result = 0;
    char temp; //暂存字符
    string s1;
    cin >> n;
    cin >> s1;
    for(int i = 0 ; s1[i] != '\0'; i ++)
    {
        for(int j = i + 1 ; s1[j] != '\0'; j ++)
        {
            if(s1[i] == s1[j])
            {
                temp = s1[i];
                for(int k = 0; (s1[k] != '\0' && k < i); k ++)  //在i指针前找
                {
                    if(s1[k] != temp)
                    {
                        result ++;
                    }
                }
            }
        }
    }
    printf("%d",result);
    return 0;
} 
