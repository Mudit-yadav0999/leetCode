class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=0;
        int maxsum=INT_MIN;
       //for(int i=0;i<nums.size();i++)
       for(int value:nums){
        sum+=value;
        maxsum=max(sum,maxsum);
        if(sum<0){
            sum=0;
        }

       } 
       return maxsum;
    }
};