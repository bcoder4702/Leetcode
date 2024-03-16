class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        for(int i=0; i<nums.size(); i++){
            if(nums[i]==0){
                nums[i]=-1;
            }
        }
     
        map<int,int> mp;
        mp[0]=-1;
        int sum=0;
        int ans=0;
        for(int i=0; i<nums.size(); i++){
            sum+=nums[i];
            if(mp.find(sum)==mp.end()){
                mp[sum]=i;
            }
            else{
                ans=max(ans,i-mp[sum]);
            }
        }
        return ans;
    }
};