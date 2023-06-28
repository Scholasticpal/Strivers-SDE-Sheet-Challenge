/*
    Given an integer n, check if binary representation of 'n' is a palindrome or not?
    (Do not convert to binary number)
*/

#include <iostream>
using namespace std;

int main()
{
    int n=9;
    int temp = n;
    int rev = 0;
    while(n!=0){
        rev = rev<<1;
        if(n&1 ==1){
            rev = rev^1;
        }
        n = n>>1;
    }
    
    if(temp == rev){
        cout<<temp<<" is a palindrome.";
    }
    else{
        cout<<temp<<" is not a palindrome.";
    }
    return 0;
}
