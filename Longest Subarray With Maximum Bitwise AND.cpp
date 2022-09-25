class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        
        int res=0;
        int ml=0;
        for(auto i:nums)
            res=max(res,i);
        
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==res)
            {
                int cnt=1;
                while(i+1<nums.size() and nums[i+1]==res){
                    cnt++;i++;
                }
                ml=max(ml,cnt);
            }
        }
        return ml;
    }
};
