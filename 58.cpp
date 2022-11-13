class Solution {
public:
    int lengthOfLastWord(string s) {
        int count = 0;
        bool flag = false;
        for(string::reverse_iterator rit=s.rbegin(); rit != s.rend(); rit++){
            if (*rit == ' ' && !flag)
                continue;
            else if (*rit == ' ' && flag)
                break;
            else
                flag = true;
            count++;
        }
        return count;
    }
};