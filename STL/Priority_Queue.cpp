#include<bits/stdc++.h>
using namespace std;
int main()
{
    priority_queue<int> pq;
    pq.push(5);
    pq.push(2);
    pq.push(10);
    pq.emplace(1);

    cout << pq.top();
    pq.pop();
 
    cout << pq.top();

    while(!pq.empty()){
        cout << pq.top() << " ";
        pq.pop();
    }


    return 0;
}