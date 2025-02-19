class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
         int n=nums.size(),closestValue=-1,minValue=INT_MAX;
        sort(nums.begin(),nums.end());
        for(int i=0;i<=n-3;i++){
            int l=i+1;
            int r=n-1;
            while(l<r){
                if(abs(nums[i]+nums[l]+nums[r]-target)<minValue){
                    minValue=abs(nums[i]+nums[l]+nums[r]-target);
                    closestValue=nums[i]+nums[l]+nums[r];
                }
                if(nums[i]+nums[l]+nums[r]<target){
                    l++;
                }
                else if(nums[i]+nums[l]+nums[r]>target){
                    r--;
                }
                else{
                    return target;
                }
            }
        }
        return closestValue;
    }
};