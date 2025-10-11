//牛客108B-小笨的数字排序（c++做法) 
#include<bits/stdc++.h>
using namespace std;

int main() 
{    
    int T;
    cin >> T;
    while (T--) 
    {
        int n;
        cin >> n;
        vector<int> evens, odds;
        for (int i = 0; i < n; i++) 
        {
            int num;
            cin >> num;    
            if (num % 2 == 0) 
            {
                evens.push_back(num);
            } 
            else 
            {
                odds.push_back(num);
            }
        }
        // 分别对偶数和奇数排序
        sort(evens.begin(), evens.end());
        sort(odds.begin(), odds.end());
        // 输出结果：先偶数后奇数
        for (int i = 0; i < evens.size(); i++) 
        {
            cout << evens[i];
            if (i < evens.size() - 1 || !odds.empty()) 
            {
                cout << " ";
            }
        }
        for (int i = 0; i < odds.size(); i++) 
        {
            cout << odds[i];
            if (i < odds.size() - 1) 
            {
                cout << " ";
            }
        }
        cout << "\n";
    }
    
    return 0;
}
