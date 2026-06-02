class Solution 
{
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        vector<int> NEW;
        for(int j=0;j<nums.size();j++)
            for(int i=j+1;i<nums.size();i++)
            {
                if(nums[i]+nums[j]==target)
                {
                NEW={i,j};
                return NEW;
                }
            }
            return {};
    }
};