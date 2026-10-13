class Solution {
public:
    bool isValid(string s) {
        vector<char>st;
        int n = s.size();
        if(s[0]==')' || s[0]==']' || s[0]=='}') return false;
        for(int i=0;i<n;i++){
            if((s[i] == ')') && (st.back() == '(')) st.pop_back();
            else if((s[i] == ']') && (st.back() == '['))st.pop_back();
            else if((s[i] == '}') && (st.back() == '{'))st.pop_back();
            else st.push_back(s[i]);
        }
        return st.empty(); 
    }
};
