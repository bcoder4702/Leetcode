class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        map<int,int> mp;
        mp[0]=1;
        int sum=0;
        int count=0;
        for(int i=0; i<nums.size(); i++){
            sum+=nums[i];
            if(sum-goal>=0){
                count+=mp[sum-goal];
            }
            mp[sum]++;
        }
        return count;
    }
};