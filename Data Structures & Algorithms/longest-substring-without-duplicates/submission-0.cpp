class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int hash[256];
        for(int i=0;i<256;i++){
            hash[i]=-1;
        }
        int l=0;
        int r=0;
        int maxlen=0;
        int n=s.length();
        while(r<n){
            if(hash[s[r]]!=-1 && hash[s[r]]>=l){
                l=hash[s[r]]+1;
            }
            int len=r-l+1;
            maxlen=max(maxlen,len);
            hash[s[r]]=r;
            r=r+1;
        }
        return maxlen;
    }
};
