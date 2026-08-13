class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        //can use prefix*suffix 2 different vectors to find final o/p vector but it will take O(n) space , therefore multiply in 1 vector only
        int prefix=1;
        int n=nums.size();
        vector<int> output(n);
        for(int i=0;i<n;i++){
            output[i]=prefix;
            prefix=prefix*nums[i];
        }
        int suffix=1;
        for(int i=n-1;i>=0;i--){
            output[i]=suffix*output[i];
            suffix=suffix*nums[i];
        }
        return output;
        
    }
};
