class Solution {
public:
    int characterReplacement(string s, int k) {
        int n=s.length();
        int l=0;
        int r=0;
        int maxlen=0;
        int maxfreq=0;
        vector<int> freq(26,0);
        while(r<n){
            freq[s[r]-'A']++;
            maxfreq=max(maxfreq,freq[s[r]-'A']);
//Remeber this that {len-maxfreq} is the changes we need to make all elements in that [l...r] range same!
//No need to update maxfreq, as dec will not help only increase will help
            while((r-l+1)-maxfreq>k){
                freq[s[l]-'A']--;
                l++;
            }
            maxlen=max(maxlen,r-l+1);
            r++;
        }
        return maxlen;
    }
};
