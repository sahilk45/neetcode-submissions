class Solution {
public:
 //It's just like next greator element
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<int> st;
        int n=temperatures.size();
        //Remeber to put 0 in values intially for this prob
        vector<int> result(n,0);

        for(int i=n-1;i>=0;i--){
            int curr=temperatures[i];
            while(!st.empty() && temperatures[st.top()]<=curr){
                st.pop();
            }
            if(!st.empty()){
            result[i]=st.top()-i;
            }
            st.push(i);
        }
        return result;
    }
};
