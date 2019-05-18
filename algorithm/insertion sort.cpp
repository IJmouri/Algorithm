#include<cstdio>
#include<iostream>
using namespace std;

void insertion (int Array[],int n)
{
    int j,key,i;
    for(j=2;j<=10;j++)
    {
        key = Array[j];
        i = j-1;
        while(i>0&&Array[i]>key)
        {
            Array[i+1]=Array[i];
            i=i-1;
        }
        Array[i+1]=key;
    }
}
int main()
{
    int k,Array[15];
    for(k=1;k<=10;k++)
    {
        scanf("%d",&Array[k]);
    }
    insertion(Array,10);
    for(k=1;k<=10;k++)
    {
        printf("%d ",Array[k]);
    }
    return 0;

}


