class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        if(tokens.size()==0){
            return 0;
        }
        sort(tokens.begin(),tokens.end());
        if(tokens[0]>power){
            return 0;
        }
        int i=0,j=tokens.size()-1;
        int score=0;
        int maxscore=0;
        while(i<=j){
           
           if(tokens[i]<=power){
               power-=tokens[i];
               i++;
               score++;
           }
           else{
               power+=tokens[j];
               score--;
               j--;
           }
           maxscore=max(maxscore,score);

        }
        return maxscore;
    }
};
