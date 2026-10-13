class Solution {
public:
    bool isAnagram(string s, string t) {
        int a1[26] ={0};
        int a2[26] ={0};
        int n = s.size();
        int m = t.size();
        
        for(int i=0;i<n;i++){
            a1[s[i] - 'a']++;
        }
        for(int i=0;i<m;i++){
            a1[t[i] - 'a']--;  
        }
        bool ans = true;
        for(int i=0;i<26;i++){
            if(a1[i] != 0){
                ans = false;
                break;
            }
        }
        return ans;
    }
};
