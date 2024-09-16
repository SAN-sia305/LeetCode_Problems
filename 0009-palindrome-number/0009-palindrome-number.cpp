class Solution {
public:
    int rev(int arr[],int s){
        long long num=0;
        for(int i = 0; i<s; i++){
            num = num * 10 + arr[i] ;
        }
        return num;
    }
    
    bool isPalindrome(int x) {
        if(x<0) return false;

            int arr[11] = {0};
            int i = 0;
            int t = x;
            while(t!=0){
                arr[i] = t%10;
                t /= 10;
                i++;
            }
            long long r = rev(arr,i);
            return x == r;
                
    return false;    
    }
};