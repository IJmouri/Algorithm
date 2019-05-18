#include <bits/stdc++.h>
#define pb push_back
using namespace std;
vector <int> L[10005];
vector <int> D;
int arr[] = {3, 2, 6, 4, 5, 1};
void lcs ()
{
    L[0].pb(D[0]);
    for(int i = 1; i < D.size(); i++)
    {
        for(int j = 0; j < i; j++)
        {
            if((D[j] < D[i]) && (L[i].size() < L[j].size() + 1))
            {
                L[i] = L[j];
            }
        }
        L[i].pb(D[i]);
    }
}
int main()
{
   for(int i = 0; i < 6; i++)
   {
       D.push_back(arr[i]);
   }
   lcs();

   for(int i = 0; i < 6; i++){
    for(int j = 0; j < L[i].size(); j++)
   {
       printf("%d ", L[i][j]);
   }
   printf("\n");
   }


}
