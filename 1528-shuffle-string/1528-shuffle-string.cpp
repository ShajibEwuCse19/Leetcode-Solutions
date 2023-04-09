class Solution {
public:
    string restoreString(string s, vector<int>& idx) {
        
        char a[s.size()];
        for(int i=0; i<s.size(); i++)
        {
            a[idx[i]] = s[i];
        }
        string res = "";
        for(int i=0; i<s.size(); i++)res+=a[i];
        
        return res;
    }
};