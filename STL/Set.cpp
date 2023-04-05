#include<bits/stdc++.h>
using namespace std;
int main()
{  // set, multiset, unordered_set 
   // do revise from geeksforgeeks.
    
    set<int>st;
    st.insert(1);
    st.emplace(2);
    st.insert(4);
    st.insert(3);

    auto it = st.find(3); 

    auto it = st.find(6); // returns st.end();

    st.erase(4);

    int cnt = st.count(1);

    
    return 0;
}