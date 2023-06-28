/*
    Given an integer n, check if the given number is a power of 4 or not.
    (Do not convert to binary number)
*/

//Optimized Approach1 : O(1)
// say n = 8 = temp. then temp-1 = 7. now n>>1 once, i.e, 4. if(n&temp-1 == n) -> it is a power of 4.
// explanation- (8)->1000, (7)->0111, 8>>1=4 now ans = 
#include <iostream>
using namespace std;

int main()
{
    int n=256;
    int temp = n;
    n = n>>1;
    if((n&(temp-1))==n){
        cout<<temp<<" is a power of 4";
    }
    else{
      court<<temp<<" is not a power of 4";
    }
    return 0;
}
// -----------------------------------------------------------

//Optimized Approach: O(1)
#include <iostream>
using namespace std;

int main()
{
    int n=256;
    int temp = n;
    if(((n&(temp-1))==0) && (n%3==1)){
        cout<<"is a power of 4";
    }
    else{
        cout<<"not a power of 4";
    }
    return 0;
}
// ------------------------------------------------------

//Brute Force Approach: O(n)
#include <iostream>
using namespace std;

int main()
{
    int n=64;
    int temp = n;
    if(n&1 ==1){
            cout<<temp<<" not a power of 4";
            return 0;
    }
    while(n!=1){
        if(n%4 != 0){
            cout<<temp<<" not a power of 4";
            return 0;
        }
        n = n>>2;
    }
    cout<<<<" is a power of 4";
    return 0;
}

