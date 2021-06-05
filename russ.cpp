#include<bits/stdc++.h>
using namespace std;
int main(){
    int a = 20;
    int res = 0;
    int b = 12;
    while(b>0){
        if(b&1){
            res=res+a;
        }
        a = a<<1;
        b = b>>1;
    }
    return 0;
}