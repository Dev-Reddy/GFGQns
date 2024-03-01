class Solution {
  public:
    int smallestSubstring(string S) {
        // Code here
        if(S.length()<3){
            return -1;
        }
        
        int last[3] = {-1,-1,-1};     //last occurence of each element
        
        int ans = INT_MAX;
        
        for(int i = 0; i< S.length();i++){
            int index = S[i] - '0';     //what is the char at current index
            
            last[index] = i;            //update latest occurence of char
            
            int minLast = min(last[0],min(last[1],last[2]));    //min of the occurences of each char
                                                                //i.e. which came first to know where string start from    
            
            if(minLast!=-1){
                ans = min(ans, i - minLast + 1);                //update ans if smaller string found
            }
        }
        
        if(ans==INT_MAX){
            return -1;
        }
        
        return ans;
        
    }
};