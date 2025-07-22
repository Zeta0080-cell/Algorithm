//acwing800-数组元素的目标和(优化) 
#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;
int a[N],b[N];

int main()
{
    int n,m,x;//目标值
    cin>>n>>m>>x;//A长,B长，目标值 
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);    
    } 
    for(int j=0;j<m;j++)
    {
        scanf("%d",&b[j]);
    }
    for(int i=0,j=m-1;i<n;i++)
    {
        while(j>=0&&a[i]+b[j]>x)
        {
            j--;
        }
        if(j>=0 && a[i]+b[j]==x)  // 添加j>=0的边界检查
        {
            printf("%d %d\n",i,j);
            break;  // 如果题目保证唯一解可以加break，否则去掉
        }
    }
    return 0;
}

