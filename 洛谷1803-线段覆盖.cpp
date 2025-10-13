//洛谷1803-线段覆盖
#include<bits/stdc++.h>
using namespace std;

struct Contest
{
	int start;
	int end;
};

bool compare(Contest a,Contest b)
{
	return a.end < b.end; //按结束时间升序排序 
}

int main()
{
	int n,count = 0;
	int lastEnd = -1; //记录上一个参加比赛的结束时间 
	cin>>n;
	vector<Contest> contests(n);
	for(int i = 0; i < n; i ++)
	{
		cin>>contests[i].start>>contests[i].end;
	}
	sort(contests.begin(),contests.end(),compare);
	for(int i = 0; i < n; i ++)
	{
		//如果当前比赛开始时间不早于上一个比赛的结束时间，就可以参加
		if(contests[i].start >= lastEnd)
		{
			count++;
			lastEnd = contests[i].end;	
		} 
	}
	printf("%d\n",count);
	return 0;
}
