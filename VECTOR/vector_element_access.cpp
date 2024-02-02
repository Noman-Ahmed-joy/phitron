#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {1, 2, 3, 4, 5};
    //vector<int>::iterator it;
    cout << "LAst element:" << endl
         << v[v.size() - 1]<<" ";
    cout << v.back()<<endl;
    cout<<"first element:"<<endl;
    cout << v[0]<<" ";
    cout << v.front();
    return 0;
}