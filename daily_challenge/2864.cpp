class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int n=s.size();
        sort(s.begin(),s.end(),greater<char>());
        for(int i=s.size()-1; i>=0; i--){
            if(s[i]=='1'){
                swap(s[i],s[n-1]);
            }
        }
        return s;
    }
};