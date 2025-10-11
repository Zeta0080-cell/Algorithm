#include<bits/stdc++.h>
using namespace std;
const int N = 1e3;

int main()
{
    int n, m;
    int tmp = 0; // 用来记录已经出圈的人数
    int i = 0, j = 0; // 定义指针
    cin >> n >> m;
    bool visited[N] = {false}; // 记录每个人是否已经出圈
    while(n != 0)
    {
        i++;
        // 如果i超过n，回到1（因为人的编号是1到n）
        if(i > n) 
		{
            i = 1;
        }
        // 如果当前人还没出圈，才计数
        if(!visited[i]) 
		{
            j++;
            if(j == m)
            {
                j = 0;
                printf("%d ", i);
                visited[i] = true; // 标记为已出圈
                tmp++;
            }
        }
        if(tmp == n)
        {
            break;
        }
    }
    return 0; 
}
