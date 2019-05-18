#include<bits/stdc++.h>
using namespace std;
int mat[100][100],vis[100];
vector<int>v;
int weight,n,e,mini,y,l,co,a,b,w,src,i,j,k;
void ts(int s)
{
    mini=10000;
    //cout<<s;
    //vis[src]=0;
    for(k=1; k<=n; k++)
    {
        if(vis[k]==-1)
        {
            if(mini>mat[s][k]&&mat[s][k]!=0)
            {
                mini=mat[s][k];
                y=k;
                //cout<<y<<endl;
            }
        }
    }

    if(co==n)
    {
        //cout<<l<<" "<<co;
        weight+=mat[l][s];
        v.push_back(l);
        cout<<weight<<endl;
        for(k=0; k<v.size()-1; k++)
        {
            cout<<v[k]<<"->";
        }
        cout<<v[v.size()-1];
    }
    else
    {
        weight+=mini;
        v.push_back(y);
        vis[y]=0;
        co++;
        //cout<<y<<" "<<mini<<endl;
        ts(y);
    }

}
int main()
{

    cin>>n>>e;
    for(i=1; i<=e; i++)
    {
        cin>>a>>b>>w;
        mat[a][b]=w;
        mat[b][a]=w;
    }
    for(i=1;i<=n;i++)
    {
        for(k=1;k<=n;k++)
            cout<<mat[i][k]<<" ";
            cout<<endl;
    }
    cin>>src;
    l=src;
    v.push_back(src);
    co=1;
    memset(vis,-1,sizeof vis);
    vis[src]=0;
    ts(src);

}
/*/*
6 10
1 2 5
1 4 2
1 3 3
2 5 2
4 6 5
4 5 6
3 6 4
3 4 3
5 6 6
2 4 8

/*/
