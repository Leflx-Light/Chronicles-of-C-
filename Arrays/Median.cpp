#include<bits/stdc++.h>
using namespace std;

double mergeArray(int *arr1, int *arr2, int size1, int size2){
    int arr3[size1 + size2];
   
    for (int i = 0; i < size1;i++){
        arr3[i] = arr1[i];
    }

    int j = 0;
    for (int i = size1; i < size1+size2;i++){
        arr3[i] = arr2[j++];
    }
    sort(arr3,arr3+size1+size2);

    int start = 0;
    int end = (size1 + size2) - 1;
    int mid = start + (end - start)/2;

    bool isEven = (size1 + size2) % 2 == 0 ? true : false;

    double result = 0;
    if(isEven){
        result += (double)(arr3[mid] + arr3[mid + 1])/2;
        return result;
    }

    return arr3[mid];
}



int main()
{
  int arr1[]={1,4,3};
  int arr2[] = {5};
  int size1 = sizeof(arr1)/sizeof(arr1[0]);
  int size2 = sizeof(arr2) / sizeof(arr2[0]);


  double answer = mergeArray(arr1, arr2, size1, size2);
  cout << answer << endl;
  return 0;
}