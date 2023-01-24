                              

                                                      //  Find First and Last Position of Element in Sorted Array  //


class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>ans;
       
      
      int count=0;
        for(int i=0; i<nums.size(); i++)
        {
            
                if(target==nums[i])
                {
                    ans.push_back(i);
                    
                    
                    count++;
                    break;
                }
               
        }
        for(int j=nums.size()-1; j>=0; j--)
            {
             if(target==nums[j])
                {
                    ans.push_back(j);
                 count++;
                    break;
                }
        }
         if(nums.size()==0 || count==0)
        {
            ans.push_back(-1);
            ans.push_back(-1);
        }
        
        
        return ans;
    }
};
