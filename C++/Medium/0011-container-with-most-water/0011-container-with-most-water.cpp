class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int maxwater=0;
        int left=0;
        int right=n-1;
        while(left<right){
            int width=right-left;
            int ht=min(height[left],height[right]);
            int currwater=width*ht;
            maxwater=max(maxwater,currwater);
            height[left]<height[right]? left++:right--;
        }
        return maxwater;
    }
};