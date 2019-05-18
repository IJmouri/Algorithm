#include <bits/stdc++.h>
#define pb push_back
using namespace std;
vector <int> node[1000];
int  dis[1000];
void bfs (int src)
{
    dis[src] = 0;
    queue <int> q;
    q.push(src);
    while(!q.empty())
    {
        int u = q.front();
         q.pop();
        for(int i = 0; i < node[u].size(); i++)
        {
            int v = node[u][i];
            if(dis[v] == -1)
            {
                dis[v] = dis[u] + 1;
                q.push(v);
            }
        }
    }
}
int main()
{
   int n , e;
    //cout<<"Enter the number of node and edge"<<endl;
   cin >> n >> e;
   map<int ,int>mp;
   int co=0;
   memset(dis, -1, sizeof dis);
   for(int i = 1; i <= e; i++)
   {
       int a, b;
       cin >> a >> b;
       if(mp.count(a)==0)
       mp[a]=co++;
       if(mp.count(b)==0)
       mp[b]=co++;
       cout<<mp[a]<<" "<<mp[b]<<endl;
       node[mp[a]].pb(mp[b]);
       node[mp[b]].pb(mp[a]);
   }
   bfs(mp[35]);
   for(int i = 0; i < n; i++)
    printf("%d ", dis[i]);
    printf("\n");

}
