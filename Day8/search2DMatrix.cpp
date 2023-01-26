

                                                              // Search 2D Matrix  //


class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        /*
           1.traverse matrix
           2.if(matrix[i][j]==target)
           return true;
        
        */
        for(int i=0; i<matrix.size(); i++)
        {
            for(int j=0; j<matrix[0].size(); j++)
            {
                if(matrix[i][j]==target)
                    return true;
            }
        }
        return false;
    }
};
