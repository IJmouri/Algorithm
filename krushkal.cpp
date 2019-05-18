#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
const int MAX_N = 101;
int nodes, edges, a, b, weight, root[MAX_N];
vector< pair<int, pair<int, int> > > E;
vector< pair<int, int> > MST;
int find_root(int x)
{
    if (root[x] != x) root[x] = find_root(root[x]);
    return root[x];
}
int main()
{
    cin >> nodes >> edges;
    for (int i = 0; i < edges; i++)
    {
        cin >> a >> b >> weight;
        E.push_back(make_pair(weight, make_pair(a, b)));
    }
    sort(E.begin(), E.end());
    for (int i = 1; i <= nodes; i++) root[i] = i;
    int totalDistance = 0;
    for (int i = 0; i < E.size(); i++)
    {
        a = find_root(E[i].second.first);
        b = find_root(E[i].second.second);
        if (a != b)
        {
            MST.push_back(E[i].second);
            totalDistance += E[i].first;
            root[a] = root[b];
        }
    }
    for (int i = 0; i < MST.size(); i++)
    {
        cout << MST[i].first << "<->";
        cout << MST[i].second << endl;
    }
    cout << "Total distance: " << totalDistance;
    return 0;
}
