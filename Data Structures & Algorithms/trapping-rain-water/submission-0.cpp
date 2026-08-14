class Solution {
public:
    int trap(vector<int>& height) {
        //prefix and suffix maximum and subtracting the current block height
        int n=height.size();
        vector<int> prevmax(n,0);
        vector<int> nextmax(n,0);
        for(int i=1;i<n;i++){
            prevmax[i]=max(prevmax[i-1],height[i-1]);
        }
        for(int i=n-2;i>=0;i--){
            nextmax[i]=max(nextmax[i+1],height[i+1]);
        }
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=max(0,min(prevmax[i],nextmax[i])-height[i]);
        }
        return sum;
    }
};
