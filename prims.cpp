#include <bits/stdc++.h>
using namespace std;
const int MAX_N = 101;
int nodes, edges, a, b, weight, pred[MAX_N];
bool visit[MAX_N] = {0};
vector< pair<int, int> > adj[MAX_N];
int main()
{
    cin >> nodes >> edges;
    for (int i = 0; i < edges; i++)
    {
        cin >> a >> b >> weight;
        adj[a].push_back(make_pair(b, weight));
        adj[b].push_back(make_pair(a, weight));
    }
    for (int i = 1; i <= nodes; i++)
    {
        pred[i] = -1;
        visit[i] = false;
    }
    int start = 1; /* arbitrarily pick 1 as a starting node */
    visit[start] = true;
    priority_queue< pair<int, pair<int, int> > > pq;
    for (int j = 0; j < adj[start].size(); j++)
        pq.push(make_pair(-adj[start][j].second,
                          make_pair(start, adj[start][j].first)));
    int MSTnodes = 1, totalDistance = 0;
    while (MSTnodes < nodes)
    {
        if (pq.empty())
        {
            cout << "Error: Graph is not connected!\n";
            return 0;
        }
        weight = -pq.top().first;
        a = pq.top().second.first;
        b = pq.top().second.second;
        pq.pop();
        if (visit[a] && !visit[b])
        {
            visit[b] = true;
            MSTnodes++;
            pred[b] = a;
            totalDistance += weight;
            for (int j = 0; j < adj[b].size(); j++)
                pq.push(make_pair(-adj[b][j].second,make_pair(b, adj[b][j].first)));
        }
    }
    for (int i = 2; i <= nodes; i++)
        cout << i << "<->" << pred[i] << "\n";
    cout << "Total distance: " << totalDistance << "\n";
    return 0;
}
