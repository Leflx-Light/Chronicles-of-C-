#include<bits/stdc++.h>
using namespace std;
//Pairs
// Pairs are in utility library.
void explainPair(){
    pair<int, int> p = {1, 3};
    cout << p.first << " " << p.second << endl;

    pair<int, pair<int, int>> p2 = {4, {5, 6}};
    cout << p2.first << " " << p2.second.second << " " << p2.second.first << endl;

    pair<int, int> arr[] = {{1, 2}, {2, 3}, {4, 5}};
    cout << arr[1].second << endl;
}


int main()
{
    explainPair();
    return 0;
}