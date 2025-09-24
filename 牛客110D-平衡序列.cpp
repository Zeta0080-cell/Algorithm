//牛客110D-平衡序列 
#include<bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    scanf("%d", &t);
    while(t--) 
    {
    	//预处理 
        int n;
        int dele=0;
        int ans=1e18;
        scanf("%d", &n);
        vector<int> a(n+1);
        vector<int> s(n+1);
        for(int i = 1; i <= n; i++) 
        {
            scanf("%d", &a[i]);
        }
        sort(a.begin(), a.end());//排序 
        for(int i=1;i<=n;i++)
        {
        	s[i]=s[i-1]+a[i];
		}
        int pos=(n+1)/2;
        for(int dele=1;dele<=n;dele++)
        {
        	int p=pos;
        	if(n%2==1)
        	{
        		if(dele>=pos){
        			p--;
				} 
			}
			else
			{
				if(dele<=pos){
					p++;
				}
			}
			int now=0;
			if(dele<=p)
			{
				now+=(p-1)*a[p]-(s[p]-a[dele]);
				now+=(s[n]-s[p])-(n-p)*a[p];
			}
			else
			{
				now+=p*a[p]-(s[p]);
				now+=(s[n]-s[p]-a[dele])-(n-p-1)*a[p];
			}
			ans=min(ans,now);
		}
		printf("%d\n",ans);
    }
    return 0;
