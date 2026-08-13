class Solution {
   public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        // unordered_map<int, int> mp;
        // vector<int> ans;
        // for (int i = 0; i < nums.size(); i++) {
        //     mp[nums[i]]++;
        // }
        // // priority_queue<pair<int, int>> pq;  // take O(logn) push and pop
        // // can be more optimized using min heap as not grater than k size heap always:
        // priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
        // for (auto it : mp) {
        //     pq.push({it.second, it.first});
        //     if(pq.size()>k){
        //         pq.pop();
        //     }
        // }
        // for (int i = k; i > 0; i--) {
        //     ans.push_back(pq.top().second);
        //     pq.pop();
        // }
        // return ans;

//Bucket Sort: freq mapped to nums[i] and traverse from right to get top K beac. 0 to size of nums can be the frequencies possible.
        unordered_map<int,int> mp;
        vector<int> ans;
        int n=nums.size();
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }
        vector<vector<int>> bucket(n+1); //beac need vector list inside each freq , ex. bucket[2]=[2,3]
        for(auto it:mp){
            bucket[it.second].push_back(it.first);
        }
        for(int i=n;i>=0;i--){
            for(auto num:bucket[i]){ //beac bucket[i] gives a vector not pait , otherwise .first,.second valid
            ans.push_back(num);
            }
            if(ans.size()==k){
                return ans;
            }
        }
        return ans;
    }
};
