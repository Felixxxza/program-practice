class Solution {
public:
    int hammingWeight(uint32_t n) {
        return __builtin_popcount(n);
        //bitset<sizeof(uint32_t)*8> bitCnt(n);
        //return bitCnt.count();
    }
};
