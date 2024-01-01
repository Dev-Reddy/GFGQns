//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    bool canPair(vector<int> nums, int k) {
        // Code here.
        unordered_map<int, int> map;    //hash to store array elements and freq
        
        for(int i = 0;i < nums.size();i++){
            int curr = nums[i] % k;     //current element mod k
            int need = (k-curr)%k;      //the number we need to make the sum divisble by k
            
            if(map.find(need)!=map.end()){
                --map[need];            //if need found, decrease freq of need.
                
                if(map[need]==0){
                    map.erase(need);    //remove key from map if value is 0 as it is no longer required
                }   
                
            } else {
                ++map[curr];            //need not found in map, but may be found in future
                                        //so increase freq of current element
            }
        }
        
        return map.size() == 0;           //if map size is zero then the solution is achieved
        
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, k;
        cin >> n >> k;
        vector<int> nums(n);
        for (int i = 0; i < nums.size(); i++) cin >> nums[i];
        Solution ob;
        bool ans = ob.canPair(nums, k);
        if (ans)
            cout << "True\n";
        else
            cout << "False\n";
    }
    return 0;
}
// } Driver Code Ends