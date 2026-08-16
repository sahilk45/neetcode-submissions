class MinStack {
//this takes O(2*n) space , we can solve this in o(1) space by using , 
// value=2*curr-mini(if curr<mini) to push and to pop 2*mini-curr (if curr<mini) 
    stack<pair<int,int>> st;
public:
    MinStack() {
        
    }
    
    void push(int val) {
        if(st.empty()){
            st.push({val,val});
        }
        else{

        int mini=min(getMin(),val);
        st.push({val,mini});
        }
    }
    
    void pop() {
        st.pop();
    }
    
    int top() {
        return st.top().first;
    }
    
    int getMin() {
        return st.top().second;
    }
};
