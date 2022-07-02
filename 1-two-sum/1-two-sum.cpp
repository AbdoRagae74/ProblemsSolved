class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
                vector<int>ans;
        map<int,vector<int>>mp;
                for(int i=0;i<nums.size();i++)
                {
                  mp[nums[i]].push_back(i); 
                }
        
        for(auto i: mp )
        {
            int x = target - i.first;
            if(x == i.first && mp[i.first].size()>=2 )
            {
                ans.push_back(i.second[0]);
                ans.push_back(i.second[1]);
                break;
            }
            else
            if(mp[x].size()>0)
            {
                ans.push_back(i.second[0]);
                ans.push_back(mp[x][0]);
                break;
            }
        }
              
        
        return ans;
    }
};