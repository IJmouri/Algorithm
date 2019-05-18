#include <map>
#include <string>
#include <iostream>
using namespace std;
int main()
{
   map<pair<int, int>, int> m;
   map<pair<int, int>, int>::iterator res;

   m.insert(make_pair(make_pair(0, 0), 1));
   m.insert(make_pair(make_pair(1, 0), 8));

   cout<< m[{1,0}];


}
