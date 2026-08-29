class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size(), x = 0;
        for(int i=0; i<n; i++){
            int majority = 0;
            for(int j=0; j<n; j++){
                if(nums[i]==nums[j]){
                    majority++;
                }
            }
            if(majority>n/2){
                x = nums[i];
                break;
            };
        }
        return x;
    }
};