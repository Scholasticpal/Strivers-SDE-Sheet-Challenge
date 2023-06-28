/*
    Given an integer n, print the number of set bits (1s) in its binary representation
    (Do not convert to binary number)
*/

//Optimized Approach: O(1)
#include <iostream>
using namespace std;

int main()
{
    int n=256;
    int count = 0;
    while(n!=0){
        n = (n&(n-1));
        count++;
    }
    cout<<count;
    return 0;
}


