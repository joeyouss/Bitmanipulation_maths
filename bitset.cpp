#include<bits/stdc++.h>
using namespace std;
int main(){
    // int arr[10];
    // bool arr[10];
    // sizeof bool?
    // size of a boolean variable -> 1 byte = 8 bits
    // bitset is an array of boolean values -> but every bool value occupies only 1 bit
    // bitset should have a specified size
    // bitset indexing starts from right 
    // by default the value of bitset is 0
    // bitset<32> b;
    // int x = 20;
    // bitset<8> b(x);
    // b-> 00010100
    // b[0] = 0
    // b[2] = 1
    bitset<8> b;
    // b-> 00100010
    b[1]= 1;
    b[5]= 1;
    bitset<8> num(11);
    // num-> 00001011
    // count the number of set bits -> 3
    cout<< num.count();
    cout<< num.size();
    // atleast one bit is set
    // 0000, 0001  
    num.any();
    // /if no bit is set
    // 0000-> true
    // /0001-> false
    num.none();
    // 1s complement
    num.flip();
    // set all the bits in bitset
    num.set();
    // unset all the bits
    num.reset();


    return 0;
}