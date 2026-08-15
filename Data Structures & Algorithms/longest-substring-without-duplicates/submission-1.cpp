class Solution {
public:
    int lengthOfLongestSubstring(string s) {
    //use sliding window+2ptr
        // int hash[256];
        // for(int i=0;i<256;i++){
        //     hash[i]=-1;
        // }
        // int l=0;
        // int r=0;
        // int maxlen=0;
        // int n=s.length();
        // while(r<n){
        //     if(hash[s[r]]!=-1 && hash[s[r]]>=l){
        //         l=hash[s[r]]+1; //move l to next ele of prev repeating
        //     }
        //     int len=r-l+1;
        //     maxlen=max(maxlen,len);
        //     hash[s[r]]=r;
        //     r=r+1;
        // }
        // return maxlen;

        int n=s.length();
        int l=0;
        int r=0;
        int maxi=0;
        unordered_set<char> st;
        while(r<n){
            while(st.count(s[r])){
                st.erase(s[l]);
                l++;
            }
            st.insert(s[r]);
            maxi=max(maxi,r-l+1);
            r++;
        }
        return maxi;
    }
};
