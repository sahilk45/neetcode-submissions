class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        //Remeber main thing is that restart from 0 of consecutive length when there is no no. present in left side of the nums[i] and use while for nums[i]+1 presents!, think of it by imagining number line
        if(nums.size()==0){
            return 0;
        }
        int maxi=0;
        unordered_set<int> st;
        for(int i=0;i<nums.size();i++){
            st.insert(nums[i]);
        }
        for(int num:st ){
            if(!st.count(num-1)){
                int length=1;
                int current = num;
                while(st.count(current+1)){
                    current++;
                    length++;
                }
                maxi=max(maxi,length);
            }

        }
        return maxi;
    }
};
