#include <bits/stdc++.h>
using namespace std;
int main()
{
    //   vector<int>v={1,2,3,2,1,4,6,7,8,9};
    //   replace(v.begin(),v.end(),2,100);
    //   for(int x:v)
    //   {
    //     cout<<x<<" ";
    //   }

    vector<int> v = {1, 2, 3, 2, 1, 2, 6, 7, 2, 9};
    // vector<int>::iterator it;
    auto it = find(v.begin(), v.end(), 10);
    if (it == v.end())
        cout << "Not found";
    else
        cout << "Found";
    // cout<<*it<<endl;
    return 0;
}