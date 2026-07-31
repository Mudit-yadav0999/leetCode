class Solution {
public:
    int majorityElement(vector<int>& nums) {
        //method 1 x
        // int n=nums.size();
        // for(int i:nums){
        //     int freq=0;
        //     for(int j:nums){
        //         if(i==j){
        //             freq++;
        //         }
        //     }
        //     if(freq>n/2)
        //     return i;
        // }
        // return -1;

        //Method2
        // int n=nums.size();
        // sort(nums.begin(),nums.end());
        // int freq=1;
        // int ans=nums[0];
        // for(int i=1;i<n;i++){
        //     if(nums[i]==nums[i-1]){
        //         freq++;
        //     }
        //     else{
        //         freq=1;
        //         ans=nums[i];
        //     }
        //     if(freq>n/2){
        //         return ans;
        //     }
        //}
        

        //method 3;
        int ans=0;
        int freq=0;
        for(int i=0;i<nums.size();i++){
            if(freq==0){
                ans=nums[i];
            }
            if(ans==nums[i]){
                freq++;
            }
            else{
                freq--;
            }
        }
        return ans;
    }
};