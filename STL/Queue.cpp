#include<bits/stdc++.h>
using namespace std;
int main()
{
    //FIFO principle follows:

    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(4);
    q.emplace(4);

    q.back() += 5;
    cout << q.back() << endl;

    cout << q.front();

    q.pop();

    cout << q.front() << endl;
    return 0; 
}