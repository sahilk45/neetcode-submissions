class Solution {
void twosum(vector<int> &nums,vector<vector<int>> &result,int target,int i,int j){
    while(i<j){
    if(nums[i]+nums[j]>target){
        j--;
    }
    else if(nums[i]+nums[j]<target){
        i++;
    }
    else{
        //2) remove duplicates from both ends
        while(i<j && nums[i]==nums[i+1]){ i++;}
        while(i<j && nums[j]==nums[j-1]){ j--;}
        result.push_back({-target,nums[i],nums[j]});
        i++;
        j--;
    }
    }
}
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>> result;
        sort(nums.begin(),nums.end());
        //1) fix n1:
        for(int i=0;i<n;i++){
            if(i>0 && nums[i]==nums[i-1]){
                continue;
            }
            int target=-nums[i];
            twosum(nums,result,target,i+1,n-1);
        }
        return result;
    }
};
