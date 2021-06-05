#include<bits/stdc++.h>
using namespace std;
int main(){
    // count set bits in every number from 1 to n
    // brian kernighan algortihm
    // n = 10 -> 1010 -> 2 set bits
    // n-1 = 9 -> 1001
    // n-1 = 8 -> 1000
    //  n= 16 -> 10000
    // n-1 -> 01111 -> 15
    // n-1 -> 14  -> 01110
    // 10&9 -> 1000 -> 1 set bit
    // n=n&(n-1) -> 8&7 -> 0000 > 0 set bit
    // n&(n-1) -> it loses one rightmost bit at a time
    while(n){
        n = n&(n-1);
        count++;
    }
    return 0;
}