#include<bits/stdc++.h>
using namespace std;
#define x 100000
int d[4][4];
int main()
{
    int d[4][4]= {{x,1,1,x},{x,x,x,1},{1,x,x,x},{x,x,1,x}};
    for(int k=0;k<4;k++){
        for(int i=0; i<4; i++)
        {
            for(int j=0; j<4; j++)
            {
                if(i==j)
             {

             d[i][j]=0;
                    continue;
            }
                if(d[i][j]>d[i][k]+d[k][j]&&d[i][k]!=x&&d[k][j]!=x)
                    d[i][j]=d[i][k]+d[k][j];
            }
        }
    }
    int sum=0;
    for(int i=0; i<4; i++)
    {
        for(int j=0; j<4; j++)
        {
            sum=sum+d[i][j];

        }
    }
    cout<<sum;
    return 0;

}
