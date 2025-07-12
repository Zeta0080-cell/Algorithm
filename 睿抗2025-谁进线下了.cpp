//睿抗2025-谁进线下了 
#include<bits/stdc++.h>
using namespace std;
const int N=1e3;

int main()
{
    int t;//t组数据
    int n;//n场比赛
    int s;//第二名队伍最后的了s分
    int r[N];//d战队一场比赛获得的排名
    int c[N];//d战队该场比赛的总分
    cin>>t;
    while(t--)
    {
        cin>>n>>s;
        int countr=0;
        int countc=0;//d战队每场比赛的总分
        for(int i=0;i<n;i++)
        {
            scanf("%d%d",&r[i],&c[i]);
        }
        for(int i=0;i<n;i++)
        {
            if(r[i]==1)
            {
                countr++;
            }
            countc+=c[i];
        }
        if(n%2==0)
        {
            if(countr<(n/2)&&(countc-s)<50)
            {
                printf("0 0");
                printf("\n");
            }
            else if(countr<(n/2)&&(countc-s)>=50)
            {
                printf("0 1");
                printf("\n");
            }
            else if(countr>=(n/2)&&(countc-s)<50&&(countc-s)==50)
            {
                printf("1 0");
                printf("\n");
            }
            else if(countr>=(n/2)&&(countc-s)>=50&&(countc-s)==50)
            {
                printf("1 1");
                printf("\n");
            }
        }
        else if(n%2!=0)
        {
            if((countr<=n/2)&&(countc-s)<50)
            {
                printf("0 0");
                printf("\n");
            }
            else if(countr<=(n/2))&&(countc-s)>=50)
            {
                printf("0 1");
                printf("\n");
            }
            else if(countr>(n/2)&&(countc-s)<50&&(countc-s)==50)
            {
                printf("1 0");
                printf("\n");
            }
            else if(countr>(n/2)&&(countc-s)>=50&&(countc-s)==50)
            {
                printf("1 1");
                printf("\n");
            }
        }
    }
    return 0;
}
