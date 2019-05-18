#include<bits/stdc++.h>
using namespace std;
queue<long> Q;
long n,c,color[100],dis[100],adj[100][100],source,destination;
void bfs(long sou,long des);
int main()
{
    long i,j,p,q;
    while(scanf("%ld",&n)==1)
    {
        for(i= 1; i <=n;i++)
        {
            for(j=1; j<=n;j++)
            {
                adj[i][j]=0;
                          color[i]=0;
                                   dis[i]=0;
            }
        }
        scanf("%ld",&c);
        for(i=1; i<=c;i++)
        {
            scanf("%ld %ld",&p,&q);
            adj[p][q]= 1;
                      adj[q][p]=1;
        }
        while(scanf("%ld %ld",&source,&destination)==2)
        {
            bfs(source,destination);
            printf("%ld\n",dis[destination]);
            for(i=1;i<=n;i++)
            {
                color[i]=0;
                         dis[i]=0;
            }
        }
    }
    return 0;
}
void bfs(long sou,long des)
{
    long u,k;
    Q.push(sou);
    while(!Q.empty())
    {
        u=Q.front();
          Q.pop();
          for(k=1;k<=n;k++)
        {
            if((!color[k])&&adj[u][k])
            {
                color[k]=1;
                         dis[k]=dis[u]+1;
                                Q.push(k);
            }
        }
        color[u]=1;
    }
}
