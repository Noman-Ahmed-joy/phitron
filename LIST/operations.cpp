#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> myList = {20, 40, 30, 10, 50, 10, 10};
    //myList.remove(10);
    //myList.sort();//choto theke boro
    // myList.sort(greater<int>());//boro theke choto
    // myList.unique();
    myList.reverse();
    for (int val : myList)
    {
        cout << val << endl;
    }
    return 0;
}