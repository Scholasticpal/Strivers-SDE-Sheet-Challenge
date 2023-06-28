/*
Given a certain integer n where n denotes:  we  have n coins with denominations from 1 to n,
find the minimum no. of coins needed to form each denominator and use every coin only once.
(solve in logn time)
*/

#include <iostream>
using namespace std;

int main()
{   
    int count = 0;
    int n = 10;
    while(n>0){
        n = n/2; //n>>1 - much faster than / operator.
        count++;
    }   
    cout<<count;
    return 0;
}
