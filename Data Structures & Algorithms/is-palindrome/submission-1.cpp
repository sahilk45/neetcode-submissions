class Solution {
public:
    bool isPalindrome(string s) {
        // string final="";
        // for(int i=0;i<s.length();i++){
        //     if('a'<=s[i] && s[i]<='z' || 'A'<=s[i] && s[i]<='Z' || '0'<=s[i] && s[i]<='9'){
        //         final+=tolower(s[i]);
        //     }
        //     else{
        //         continue;
        //     }
        // }


        int i=0;
        int j=s.length()-1;
        while(i<j){
            if(!isalnum(s[i])){
                i++;
            }
            else if (!isalnum(s[j])){
                j--;
            }
            else if(tolower(s[i])!= tolower(s[j])){
                return false;
            }
            else{
                i++;
                j--;
            }
        }
        return true;


    }
};
