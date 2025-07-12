//睿抗2024-暖炉与水豚
#include<bits/stdc++.h>
using namespace std;
const int N=1e3;
int g[N][N];
int n,m;

bool find(int a,int b,char c)//找(a,b)周围8个格子中有没有字符c
{
	for(int x=a-1;x<=a+1;x++)
	{
		for(int y=b-1;y<=b+1;y++)
		{
			if(x!=a||y!=b)
			{
				if(x>=0&&x<n&&y>=0&&y<m&&g[x][y]==c)
				{
					return true;
				}
			}
		}
	}	
	return false;
} 

int main()
{
	cin>>n>>m;
	for(int i=0;i<n;i++)
	{
		cin>>g[i];
	}
	int cnt=0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(g[i][j]=='w')
			{
				if(!find(i,j,'m'))
				{
					for(int x=i-1;x<=i+1;x++)
					{
						for(int y=j-1;y<=j+1;y++)
						{
							if(x>=0&&x<n&&y>=0&&y<m&&g[x][y]=='.')
							{
								if(!find(x,y,'c'))
								{
									cout<<x+1<<' '<<y+1<<endl;
									cnt++;
								}
							}
						}
					}
				}
			}
		}
	}
	if(!cnt)cout<<"Too cold!"<<endl;
	return 0;
}
