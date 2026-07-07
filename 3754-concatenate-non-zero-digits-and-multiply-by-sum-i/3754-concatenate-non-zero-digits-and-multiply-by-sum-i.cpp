class Solution {
public:
    long long sumAndMultiply(int n) {
        if(n==0)
        return n;

        long long ans=0;
        long long sum=0;
        while(n)
        {
            int first=n%10;
            if(first!=0)
            {
                ans=ans+first;
                ans=1LL * ans*10;
                n=n/10;
            }
            else
            n=n/10;

        }
        long long new_ans=0;
        while(ans)
        { 
            int sec =ans%10;
            sum=sum+sec;
        new_ans=new_ans+sec;
        new_ans=1LL*new_ans*10;
                ans=ans/10;

        }
        return (1LL*new_ans*sum)/10;
    }
};