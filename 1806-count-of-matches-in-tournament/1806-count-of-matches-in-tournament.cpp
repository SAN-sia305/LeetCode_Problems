class Solution {
public:
    int numberOfMatches(int n) {
        int TMatches = 0;
        int match = 0;
        while(n > 1){
        if(n%2 == 0){ 
            match = (n/2); 
            n=match;    
        }
        else{ 
            match = ((n-1)/2); 
            n=match+1;
        }
        TMatches += match;
    }
    return TMatches;
    }
};