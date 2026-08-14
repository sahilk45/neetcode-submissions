class Solution {
public:
    int trap(vector<int>& height) {
        // //prefix and suffix maximum and subtracting the current block height
        // int n=height.size();
        // vector<int> prevmax(n,0);
        // vector<int> nextmax(n,0);
        // for(int i=1;i<n;i++){
        //     prevmax[i]=max(prevmax[i-1],height[i-1]);
        // }
        // for(int i=n-2;i>=0;i--){
        //     nextmax[i]=max(nextmax[i+1],height[i+1]);
        // }
        // int sum=0;
        // for(int i=0;i<n;i++){
        //     sum+=max(0,min(prevmax[i],nextmax[i])-height[i]);//Remeber this is the main formula, max 0 beac can be -ve ans
        // }
        // return sum;

//Approach3: 2 pointer: we don't need to store leftmax and rightmax, beac the smaller side will only decide the height for water and not requirement of both
    int n=height.size();
    int ans=0;
    int l=0;
    int r=n-1;
    int lmax=0;
    int rmax=0;
    while(l<r){
        lmax=max(lmax,height[l]);
        rmax=max(rmax,height[r]);
        //As the smaller side will only decide the height for water, So:
        if(lmax<rmax){
            ans+=lmax-height[l];
            l++;
        }
        else{
            ans+=rmax-height[r];
            r--;
        }
    }
    return ans;
    }
};
