//洛谷P1012-拼数
#include<bits/stdc++.h>
using namespace std;
const int N = 1e3;
int a[N];

//字符串的字典序比较（规则） 
bool cmp(const string &a, const string &b) 
{
    return a + b > b + a;
}

int main() 
{
    int n;
    cin >> n;
    vector<string> nums(n);
    for (int i = 0; i < n; i++) 
	{
        cin >> nums[i];
    }
    
    sort(nums.begin(), nums.end(), cmp);  //排序规则已定义 
    
    // 如果第一个是 "0"，则结果就是 "0"
    if (nums[0] == "0") 
	{
        cout << "0" << endl;
        return 0;
    }
    
    string result;
    for (const string &num : nums) 
	{
        result += num;
    }
    cout << result << endl;
    return 0;
}
