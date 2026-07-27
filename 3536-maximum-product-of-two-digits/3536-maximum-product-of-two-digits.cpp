class Solution {
public:
    int maxProduct(int n) {
        if(n<10)
        return n;
       string s=to_string(n);
       sort(s.begin(),s.end());
       return (s[s.size()-1]-'0')*(s[s.size()-2]-'0');
       
    }
};