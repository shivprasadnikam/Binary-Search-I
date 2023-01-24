


                                                              // Arranging Coins //

class Solution {
public:
    int arrangeCoins(int n) {
       int step=1;
       while(n-step>=0)
       {
           n-=step;
           step++;
       } 
       return step-1;
    }
};
