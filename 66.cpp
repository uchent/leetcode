class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int i = digits.size() - 1, carry = 1;
        while(i >= 0){
            digits[i] = (digits[i] + carry) % 10;
            carry = (carry && digits[i] == 0) ? 1:0;
            i--;
        }
        if(carry){
            digits.insert(digits.begin(), 1);
        }
        return digits;
    }
};