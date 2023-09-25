class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target)
      {
        int i,x,y;
       map<int,int> ht;
       vector<int> ans; 
      
        for(i=0;i<nums.size();i++)
        {
          x=nums[i];
          y=target-x;
          if(ht.find(y)!=ht.end())
          {
            ans.push_back(ht[y]);
            ans.push_back(i);
            break;
          }
          ht[x]=i;
        }

        return ans;

      }
};
