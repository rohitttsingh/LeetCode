class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxi = 1, maxer = nums[0];
        
        for(int i=0;i<nums.size();i++){
           for (int j=i; j<nums.size(); j++)
        {       maxi=1;
            for (int k=i; k<=j; k++)
                maxi*= nums[k];
  
               maxer = max(maxer,maxi);
               //cout<<maxer<<" ";
    
        }
        }
        return maxer;
    }
};
