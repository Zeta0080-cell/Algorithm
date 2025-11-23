//第六届传智杯 - 删除公共字符 
#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s1, s2;
    
    // 使用getline读取整行
    getline(cin, s1);
    getline(cin, s2);
    
    string result = "";  // 用于存储结果
    
    for(int i = 0; i < s1.length(); i++)
    {
        bool judge = false;
        
        // 检查当前字符是否在s2中
        for(int j = 0; j < s2.length(); j++)
        {
            if(s1[i] == s2[j])
            {
                judge = true;
                break;  // 找到就退出内层循环
            }
        }
        
        // 如果不需要删除，就添加到结果中
        if(!judge)
        {
            result += s1[i];
        }
    }
    
    cout << result;
    return 0;
}
