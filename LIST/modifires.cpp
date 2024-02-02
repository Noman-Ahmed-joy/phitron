#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> myList = {10, 20, 30, 40, 30, 30, 70};
    list<int> newList = {100, 200, 300};
    vector<int> v = {60, 70, 80};
    //   list<int>newList;
    //   newList =myList;
    //   newList.assign(myList.begin(),myList.end());
    //   myList.push_front(100); //Insert in head
    //   myList.push_back(50); // Insert in tail
    //   myList.pop_back();//delete tail
    //   myList.pop_front();//delete head
    //   myList.erase(next(myList.begin(), 2), next(myList.begin(), 5));//delete multiple value
    //   myList.insert(next(myList.begin(),2),v.begin(),v.end());
    //   replace(myList.begin(),myList.end(),30,100);
    //   for (int val : myList)
    //   {
    //     cout << val << endl;
    //   }
    auto it =find(myList.begin(),myList.end(),40);
    if(it==myList.end())
    {
        cout<<"NOT FOUND";
    }
    else
    {
        cout<<"FOUND";
    }
    return 0;
}