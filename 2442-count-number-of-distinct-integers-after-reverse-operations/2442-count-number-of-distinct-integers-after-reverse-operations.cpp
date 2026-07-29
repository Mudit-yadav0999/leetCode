class Solution {
public:
    
    int reverseNum(int n) {
        int rev = 0;
        
        while(n > 0) {
            rev = rev * 10 + n % 10;
            n /= 10;
        }
        
        return rev;
    }
    
    int countDistinctIntegers(vector<int>& nums) {
        set<int> s;
        
        for(int x : nums) {
            s.insert(x);
            s.insert(reverseNum(x));
        }
        
        return s.size();
    }
};