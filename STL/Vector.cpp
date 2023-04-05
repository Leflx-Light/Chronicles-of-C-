#include<bits/stdc++.h>
using namespace std;

void explainVector(){

    vector<int> v;
    v.push_back(1);
    v.emplace_back(2);

    vector<pair<int, int>> vec;
    vec.push_back({1, 2});
    v.emplace_back(3, 4);

    vector<int> vec2(5, 100);

    vector<int> vec3(5);

    vector<int> vec4(vec2);

    vector<int> vec5 = {1, 2, 3, 4, 5};
    cout << vec5[0] << endl;
    cout << vec5[1] << endl;
    cout << vec5[2] << endl;
    cout << vec5.at(3) << endl;
    cout << vec5.back() << " ";

    //other way:
    vector<int>::iterator it = vec5.begin();
    it++;
    cout << *(it) << " ";

    it = it + 2;
    cout << *(it) << " ";

    vector<int>::iterator it = vec5.end();
    // end() points to next to end of vector.
    vector<int>::iterator it = vec5.rend();
    vector<int>::iterator it = vec5.rbegin();

   //iterating through iterator over vector:
    for (vector<int>::iterator it = vec5.begin(); it != vec5.end();it++){
        cout << *(it) << " ";
    }

    for (auto it = vec5.begin(); it != vec5.end();i++){
        cout << *(it) << " ";
    }

    //for each loop:
    for(auto it:v){
        cout << it << " ";
    }


  //deleting or removing elements from vector:

    vector<int> v2 = {1, 2, 3, 4, 5, 6};
    v2.erase(v2.begin() + 1);
    v2.erase(v2.begin() + 2, v2.begin() + 4);
}






int main()
{
    vector<int> v{1, 4, 3, 2};
    sort(v.begin(), v.end(),greater<int>());
    for(auto i:v){
        cout << i << " ";
    }
    return 0;
}