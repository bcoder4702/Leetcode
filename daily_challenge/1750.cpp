class Solution {
public:
    int minimumLength(string s) {
        int i=0,j=s.size()-1;
        while(i<j){
            string s1,s2;
            int previ=i,prevj=j;
            s1.push_back(s[i]);
            i++;
            while(i<prevj){
               if(s[i]==s[i-1]){
                   i++;
               }
               else{
                   break;
               }
            }
            s2.push_back(s[j]);
            j--;
            while(previ<j){
              if(s[j]==s[j+1]){
                  j--;
              }
              else{
                  break;
              }
            }
            if(s1[0]!=s2[0]){
              return prevj-previ+1;
            }
        }
        return j-i+1>=0?j-i+1:0;
    }
};