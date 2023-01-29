

                                                        //  Maximum Distance Between a Pair of Values  //



class Solution {
public:
    int maxDistance(vector<int>& nums1, vector<int>& nums2) {
        int currDistance,maxDistance=0;
      /*  Time complexity O(n2)
       for(int i=0; i<nums1.size(); i++)
        {
            for(int j=0; j<nums2.size(); j++)
            {
                if(i<=j && nums1[i]<=nums2[j])
                {
                    currDistance=j-i;
                    if(currDistance>maxDistance)
                    maxDistance=currDistance;
                }
            }
        }*/

        // Time complexity O(n)
        int i=0,j=0;
        while(i<nums1.size() && j<nums2.size())
        {
            if(nums1[i]>nums2[j])
            {
                i++;
            }
            else
            {
                maxDistance=max(maxDistance,j-i);
                j++;
            }
        }

        return maxDistance;
    }
};
