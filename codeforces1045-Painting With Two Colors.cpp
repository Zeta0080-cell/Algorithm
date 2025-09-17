//codeforces1045-Painting With Two Colors
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	int x,a,b;
	cin>>t;
	while(t--)
	{
		cin>>x>>a>>b;
		if(x%2==0)
		{
			if(b%2==0)
			{
				printf("YES\n");
			}
			else
			{
				printf("NO\n");
			}
		}
		else if(x%2==1)
		{
			if(b%2==1)
			{
				if(a%2==1)
				{
					printf("YES\n");
				}
				else
				{
					printf("NO\n");
				}
			}
			else
			{
				printf("NO\n");
			}
		}
	}
	return 0;	
} 
