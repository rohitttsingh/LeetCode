class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        vector<int> v; int n =nums.size(); 
        for(int i=0;i<n;i++)
        {
                for(int j=i+1;j<n;j++)
            {   
                if(nums[i]+nums[j]==target)
                {   
                    
                     v.push_back(i);
                     v.push_back(j); 
                     break; 
                }
                    else continue;
            }
        }
        
        
        return v;
    }
};
