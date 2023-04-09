class Solution {
public:
    int lengthOfLastWord(string s) {
        
        int idx = -1;
        bool f = false;
        int cnt = 0;
        for(int i=s.size()-1; i>=0; i--)
        {
            if(s[i] != ' ')f = true;
            if(f and s[i] != ' ')cnt++;
            if(f and s[i] == ' ')return cnt;
        }
        
        return cnt;
    }
};