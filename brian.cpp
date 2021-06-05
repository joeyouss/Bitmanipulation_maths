class Solution {
public:
    vector<int> countBits(int n) {
//         n->5           set bits
//         n=1 -> 0001 ->    1
//         n=2 -> 0010 ->    1
//         n=3 -> 0011 ->    2
//         n=4 -> 0100 ->    1
//         n=5 -> 0101 ->    2
    
        
//         method 1 -> using bitset
        vector<int> ans;
        
        // for(int i = 0;i<=n;i++){
        //     int k = i;
        //     bitset<32> b(k);
        //     ans.push_back(b.count());
        // }
        // return ans;
        
//         method 2 - brian kernighan algorithm
//         1-> whenever i subtract 1 from a number -> every bit after 
        // the rightmost set bit gets reversed
        // p = 10 ->1010; p=p-1
        // p = 9 -> 1001 ; p=p-1
//         p= 8 -> 1000 ; p=p-1
        
        // p = 1000 (8) -> 0111 (7)
//         2-> n&(n-1) will remove the rightmost set bit
        // 8&7  = 1000 & 0111 -> 0000
        for(int i = 0;i<=n;i++){
            int count = 0;
            int k = i;
            while(k){
                k = k&(k-1);
                count++;
            }
            ans.push_back(count);
        }
        return ans;
    }
};