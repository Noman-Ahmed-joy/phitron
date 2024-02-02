#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {10, 20, 30};
    vector<int> v2 = {1, 2, 3};
    // v.pop_back();
    // v.pop_back();
    v2 = v; // O(N)
    for(int i=0;i<v.size();i++)
    {
        cout<<v2[i]<<" ";
    }
    return 0;
}