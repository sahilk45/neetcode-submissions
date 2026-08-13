class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length()){
            return false;
        }
        unordered_map<char,int> f1;
        unordered_map<char,int> f2;
        for(int i=0;i<s.length();i++){
            f1[s[i]]++;
            f2[t[i]]++;
        }
        for(auto it:f1){
            char a=it.first;
            int b=it.second;
            if(f2[a]!=b){
                return false;
            }
        }
        return true;
    }
};
