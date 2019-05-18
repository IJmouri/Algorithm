#include <bits/stdc++.h>
using namespace std;
vector <int> v[101];
int dis[1001];
int main()
{
    int n=4; /// how many edge
    //cin >> n;
    for(int i = 0; i < n; i++)
    {
        int x ,y;
        cin >> x >> y;
      v[x].push_back(y);  /// store adjacency
      v[y].push_back(x);
    }

     int src;
     src = 2;
    queue<int> q;
    q.push(src);
    while(!q.empty()) /// bfs process
    {
        dis[src] = 0;
        int u = q.front();
        q.pop();
        for(int i = 0; i < v[u].size(); i++)
        {
            int g = v[u][i];
            if(dis[g] == 0)
            {
                dis[g] = dis[u] + 1;
                q.push(g);
            }
        }
    }

    for(int i = 1; i <= 5; i++)
        printf("%d ", dis[i]);
}
