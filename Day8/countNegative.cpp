
                                                        // Count Negative Numbers in a Sorted Matrix //



class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int negCount=0;
        for(int i=0; i<grid.size(); i++)
        {
            for(int j=0; j<grid[i].size(); j++)
            {
                if(grid[i][j]<0)
                negCount++;
            }
        }
        return negCount;
    }
};
