#include<bits/stdc++.h>
using namespace std;
int c[2000][2000];
int main()
{
    string s1,s2;
    while(getline(cin,s1))
    {
        getline(cin,s2);

        int m=s1.length();
        int n=s2.length();
        int i,j;
        for( i=1;i<=m;i++)
        {
            for( j=1;j<=n;j++)
            {
                if(s1[i-1]==s2[j-1])
                    c[i][j]=c[i-1][j-1]+1;
                else if(c[i-1][j]>=c[i][j-1])
                    c[i][j]=c[i-1][j];
                else
                    c[i][j]=c[i][j-1];
            }
        }
        cout<<c[m][n]<<endl;
    }
    return 0;
}

