#include<iostream>
using namespace std;

int returnCount(int number, int arr[],int n){
    int count = 0;
    for (int i = 0; i < n;i++){
        if(arr[i]==number){
            count = count + 1;
        }
    }
    return count;
}

int main()
{
    int arr[5] = {1, 2, 1, 3, 2};
    int number = 1;
    cout << returnCount(number, arr,5);
    return 0;
}