class Solution {
public:
    bool isValid(string s) {
        vector<char>st;
        int n = s.size();
        st.push_back(s[0]);
        for(int i=1;i<n;i++){
            if((s[i] == ')') && (st.back() == '(')) st.pop_back();
            else if((s[i] == ']') && (st.back() == '['))st.pop_back();
            else if((s[i] == '}') && (st.back() == '{'))st.pop_back();
            else st.push_back(s[i]);
        }
        return st.empty(); 
    }
};
