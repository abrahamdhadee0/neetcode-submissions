    class Solution {
    public:

        string encode(vector<string>& strs){
            if(strs.empty()) {};
            if(strs.size()==0) return "";
            if(strs.size()==1)  return strs[0]+"~";
            string s;
            for(int i=0;i<strs.size();i++){
                s+=strs[i];
                s+='~';
            }
            return s;
        }
     vector<string> decode(string s) {
    ///"Hello~world"
    if(s.empty()) return {};
            if(s=="") return {""};
            vector<string> ans;
            string a;
            for(int i=0;i<s.size();i++){
                if(s[i]=='~'){
                    ans.push_back(a);
                    a="";
                }
                else a+=s[i];
                }

                return ans;
            }
        };
