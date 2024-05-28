class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        if (s.length() == 0){
            return true;
        }
        if (s.length() == 1){
            return false;
        }
        st.push(s[0]);
        for(int i = 1;i<s.length(); i++){
            if (!st.empty()){
                char a = st.top(); 
                if ((a == '(' && s[i] == ')') || (a == '[' && s[i] == ']')|| (a == '{' && s[i] == '}')){
                    st.pop();
                }
                else{
                    st.push(s[i]);
                }
            }
            else{
                st.push(s[i]);
            }
        }
        return st.empty();
    }
};
