//{ Driver Code Starts
// C++ program to find largest subarray sum with
// at-least k elements in it.
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

#define ll long long
class Solution{
    public:    
    long long int maxSumWithK(long long int a[], long long int n, long long int k) 
    {   
        //we will solve using sliding window technique (min size of window= k)
        
        ll int ans = INT_MIN;       //to store max sum
        ll int currentSum = 0;      //sum of current window
        ll int last = 0;            //to store sum of elements before window
        
        int i = 0;                  //start of window
        int j = 0;
        
        while (j<n){
            currentSum += a[j];     //add to current window sum
            
            if(j-i+1<k){            //window size less than k
            
                j++;                //increment window size
            
            } else if(j-i+1==k){    //window size equal to k
                
                ans = max(ans,currentSum);      //update ans if needed
                j++;                            //increment window size
                
            } else if(j-i+1>k){     //window size more than k
                
                ans = max(ans,currentSum);  //update ans if needed
                last += a[i];               //add starting element of window to the elements before window so start can move ahead
                i++;                        //move start ahead, now window is again 6
                                            //last stores the sum of elements before window
                                            //last should be +ve so it can contribute to max sum
                
                if(last<0){                 //if last is -ve, remove it from currentSum & reset it zero as we will never need a -ve value
                    currentSum -= last;
                    ans = max(ans,currentSum);
                    last = 0;
                }
                
                j++;                        //increment window size
            }
        }
        
        return ans;                         
    }
};

//{ Driver Code Starts.

// Driver code
int main() {
    long long int t;
    cin >> t;
    while (t--) {
        long long int n, k, i;
        cin >> n;
        long long int a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        cin >> k;
        Solution ob;
        cout << ob.maxSumWithK(a, n, k) << endl;
    }
    return 0;
}

// } Driver Code Ends