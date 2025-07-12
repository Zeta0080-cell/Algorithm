#include<bits/stdc++.h>
using namespace std;
vector<vector<int>>adj;//аз╫с╠М
vector<bool>vi;
vector<int>parent;
vector<int>depth;
vector<int>clen;

void find(int u,int par,int d)
{
    vi[u]=true;
    parent[u]=par;
    depth[u]=d;
    for(int v:adj[u])
    {
        if(v==par)
        {
            continue;
        }
        if(!vi[v])
        {
            find(v,u,d+1);
        }
        else
        {
            if(depth[v]<depth[u])
            {
                int clen=depth[u]-depth[v]+1;
                clen.push_back(clen);
            }
        }
    }
}

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int n,m;
        cin>>n>>m;
        adj.assign(n+1,vector<int>());
        vi.assign(n+1,false);
        parent.assign(n+1,-1);
        clen.clear();
        for(int i=0;i<m;++i)
        {
            int x,y;
            cin>>x>>y;
            adj[x].push_back(y);
            adj[y].push_back(x);
        }
        for(int u=1;u<=n;++u)
        {
            if(!vi[u])
            {
                find(u,-1,0);
            }
        }
        sort(clen.begin(),clen.end(),greater<int>());
        int max1=0,max2=0;
        if(!clen.empty)
        {
            max1=clen[0];
            if(clen.size()>=2)
            {
                max2=clen[1];
            }
        }
        cout<<max1<<" "<<max2<<endl;
    }
    return 0;
}
