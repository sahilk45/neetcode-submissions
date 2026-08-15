class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int hash1[26]={0};
        int hash2[26]={0};
        int n1=s1.size();
        int n2=s2.size();
        int l=0;
        int r=n1-1;
        for(int i=0;i<n1;i++){
            hash1[s1[i]-'a']++;
        }
        while(r<n2){
            for(int i=l;i<=r;i++){
                hash2[s2[i]-'a']++;
            }
            int count=0;
            for(int i=0;i<26;i++){
                if(hash1[i]==hash2[i]){
                    count++;
                }
            }
            if(count==26){
                return true;
            }
            for(int i = 0; i < 26; i++) {
                hash2[i] = 0;
            }
            l++;
            r++;
        }
        return false;
    }
};
