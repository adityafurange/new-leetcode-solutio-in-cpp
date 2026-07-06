class Solution {
public:
    string largestNumber(vector<int>& nums) {
       vector<string> ans;

for (int x : nums)
    ans.push_back(to_string(x));
        for(int i=0;i<ans.size()-1;i++)
        {
           for(int j=i+1;j<ans.size();j++)
            {
                if(ans[i]+ans[j]<ans[j]+ans[i])
                swap(ans[i],ans[j]);
            }


        }
      
    string res;

for (string x : ans)
    res += x;
    
if (res[0] == '0')
    return "0";
  
return res;
    }
};