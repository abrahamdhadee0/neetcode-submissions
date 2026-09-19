class Solution {
public:
    vector<string>st;
    string encode(vector<string>& strs) {
            st=strs;
            return"";
    }

    vector<string> decode(string s) {
            return st;
    }
};
