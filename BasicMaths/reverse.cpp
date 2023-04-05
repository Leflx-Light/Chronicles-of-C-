#include<iostream>
using namespace std;

int reverseNum(int n){
   int revN = 0;
   while(n !=0){
       int lastDigit = n % 10;
       n /= 10;
       revN = (revN * 10) + lastDigit;
   }
   return revN;
}



int main()
{
    int n = 9987;
    cout << reverseNum(n);
    return 0;
}