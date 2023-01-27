                                                    // Check If N and Its Double Exist //


class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
       for(int i=0; i<arr.size()-1; i++)
       {
           int count=0;
           for(int j=1; j<arr.size(); j++)
           {
               
              // cout<<count<<endl;
               if((arr[i]==2*arr[j] || arr[j]==2*arr[i]) && i!=j)
               {
                   cout<<arr[i]<<" "<<arr[j];
                    return true;
               }
               
              
           }
       }
      //cout<<arr[arr.size()-1];
       return false;
    }
};
