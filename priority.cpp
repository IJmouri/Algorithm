#include<bits/stdc++.h>
using namespace std;
int main()
{
    priority_queue<int>pq;
    pq.push(-4);
    pq.push(-1);
    pq.push(-2);
    pq.push(-8);
    while(!pq.empty())
    {
        cout<<-pq.top()<<endl;
        pq.pop();
    }
}
