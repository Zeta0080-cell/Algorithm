//洛谷1223-排队接水(贪心思想)
#include <iostream>
#include <iomanip>
#include <algorithm>
using namespace std;

struct Person 
{
    int id;      // 编号
    int time;    // 接水时间
};

bool cmp(const Person &a, const Person &b) 
{
    if (a.time == b.time) 
	{
        return a.id < b.id;  // 时间相同，编号小的在前
    }
    return a.time < b.time;  // 时间短的在前
}

int main() 
{
    int n;
    cin >> n;
    Person people[n];
    for (int i = 0; i < n; i++) 
	{
        cin >> people[i].time;
        people[i].id = i + 1;  // 编号从1开始
    }
    sort(people, people + n, cmp);
    for (int i = 0; i < n; i++) 
	{
        cout << people[i].id;
        if (i < n - 1) 
		{
            cout << " ";
        }
    }
    cout << endl;
    long long totalWaitTime = 0;  
    long long currentTime = 0;  
    for (int i = 0; i < n; i++) 
	{
        totalWaitTime += currentTime;  
        currentTime += people[i].time; 
    }
    double averageWaitTime = (double)totalWaitTime / n;
    cout << fixed << setprecision(2) << averageWaitTime << endl;
    return 0;
}
