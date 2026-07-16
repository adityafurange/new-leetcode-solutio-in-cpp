class Solution {
public:
    long long gcdSum(vector<int>& nums) {
     //vector<int> prefix_gcd;
     int mx_i=0;
    
     for(int i=0;i<nums.size();i++)
     {
       mx_i=max(mx_i,nums[i]);
   nums[i]=gcd(nums[i],mx_i);
   

     } 
     sort(nums.begin(),nums.end());
     int f=0;
     int l=nums.size()-1;
     long long ans=0;
     while(f<l) 
     {
        ans+=gcd(nums[f],nums[l]);
        f++;
        l--;

     }    
     return ans;  
    }
};