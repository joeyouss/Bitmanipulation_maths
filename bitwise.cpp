#include<bits/stdc++.h>
using namespace std;
int main(){
    cout<<sizeof(int)<<endl;
    // 4 bytes -> 32 bits
    // a-> 0101 
    int a = 5;
    // b-> 1001
    int b = 9;
    // 6 bitwise operators
    // a&b -> 0001 ->1
    cout<<(a&b)<<endl;
    // a|b-> 1101 ->13
    cout<<(a|b)<<endl;
    // 1100 -> 12
    cout<<(a^b)<<endl;
    // 01001 -> 10010 -> 18
    cout<<(b<<1)<<endl;
    // 1001-> 0100 -> 4
    cout<<(b>>1)<<endl;
    // a -> 0(28).....0101 -> 1(28)...1010 -> 8+2 = 10
    // whenever there is a 1 present at the first index -> it is a negative number
    // 2s complement = 1s complement + 1
    // 0(28)...0101 = 0101+1 = 0110 -> 6
    // -6
    cout<<(~a)<<endl;

}