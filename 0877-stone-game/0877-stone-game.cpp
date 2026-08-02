class Solution {
public:
    bool stoneGame(vector<int>& piles) {
        int i=0;
        int f=piles.size()-1;
        int alise_sum=0;
        int bob_sum=0;
        while(i<f)
        {
            //alise

        alise_sum+=max(piles[i],piles[f]);
        if(piles[i]==piles[f])
        i++;
        else
        if(piles[i]>piles[f])
        i++;
        else
        if(piles[i]<piles[f])
        f--;

        //bob 
        bob_sum+=min(piles[i],piles[f]);
          if(piles[i]==piles[f])
        i++;
        else
        if(piles[i]>piles[f])
      f--;
        else
        if(piles[i]<piles[f])
         i++;
        }
        if(alise_sum>bob_sum)
        return true;
        else return  false;
    }
};