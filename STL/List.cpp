#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int> ls;
    ls.push_back(2);
    ls.emplace_back(3);
    ls.push_front(5);
    ls.emplace_front(7);

    for(auto i:ls){
        cout << i << " ";
    }
    cout << endl;

    //rest functions same as vector.
    // begin, end, rbegin, rend, clear, insert, size, swap.
    return 0;
}