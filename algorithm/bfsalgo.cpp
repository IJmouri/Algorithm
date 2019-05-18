#include<bits/stdc++.h>
using namespace std;
queue<int>q;
int adj[100][100],color[100],dis[100],s,n;
void bfs(int s)
{
    int u,k;
    q.push(s);
    while(!q.empty())
    {
        u=q.front();
        dis[s]=0;
        q.pop();
        for(k=1;k<=n;k++)
        {

            if((!color[k])&&adj[u][k])
            {
                color[k]=1;

                dis[k]=dis[u]+1;
                q.push(k);
            }
        }
        color[u]=1;
    }

}
int main()
{
    int i , j,p,q,m;
    scanf("%d%d",&n,&m); ///n=e
    for(i=1;i<=n;i++)
    {
        scanf("%d%d",&p,&q);
            adj[p][q]=1;
            adj[q][p]=1;

    }
    scanf("%d",&s);
    bfs(s);
    for(i=1;i<=m;i++)
    {
        cout<<dis[i]<<" ";
    }
}

