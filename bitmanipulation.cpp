#include<bits/stdc++.h>
using namespace std;
int main(){
    int n = 10;
    // 168421
    // 16+1 -> 10001
    // 10-> 1010
    int binary[10];
    int i = 0;
    // n = 10
    while(n>0){
        // binary[0] = 0
        // binary[1] = 1
        // binary[2] = 0
        // binary[3]= 1
        // 0101
        binary[i] = n%2;
        // 10-> 5
        // 5/2 -> 2
        n=n/2;
        // i=1
        // i=2
        i++;
    }
    // 17/2 -> 1
    // 8/2 -> 0
    // 4/2 ->0
    // 2/2-> 0
    // 1/2 -> 1

    // dry run for 10 
    for(int k = i-1;k>=0;k--){
        cout<<binary[k];
    }
    return 0;
}