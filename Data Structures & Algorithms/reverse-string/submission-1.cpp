class Solution {
public:
    void reverseString(vector<char>& s) {
        int n=s.size();
        vector<int> reverseString(n);
        int idx=0;
        for(int i=n-1;i>=0;i--){
            reverseString[idx]=s[i];
            idx++;
        }
        for(int i=0;i<n;i++){
            s[i]=reverseString[i];
        }
    }
};