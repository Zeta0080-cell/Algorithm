//滑动窗口-单调队列（双指针O（kn））
#include<bits/stdc++.h>
using namespace std;
const int N=1e6;
int a[N];//原数组  

int main()
{
	int n,k;//数组长度和窗口的长度 
    int min[N], max[N];// 存储每个窗口的最小值和最大值
	cin>>n>>k;
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int idx = 0;
    for (int i = 0; i <= n - k; i++) 
	{
        int cmin = 100000;
        int cmax = -100000;
        // 遍历窗口内的所有元素
        for (int j = i; j < i + k; j++) 
		{
            if (a[j] < cmin) cmin = a[j];
            if (a[j] > cmax) cmax = a[j];
        }

        min[idx] = cmin;
        max[idx] = cmax;
        idx++;
    }
    // 输出最小值
    for (int i = 0; i < idx; i++) 
	{
        cout << min[i] << " ";
    }
    cout << endl;
    // 输出最大值
    for (int i = 0; i < idx; i++) 
	{
        cout << max[i] << " ";
    }
    cout << endl;
	return 0;
} 
