class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
    
        for(int i=0;i<nums.size();i++){
           int a=nums[i];
             i=0+i;
            for(int j=i+1;j<nums.size();j++){
               int b=nums[j];
                if(target==a+b){
                    return{i,j};
                    break;
                }
            }

        }

    return{};
    }
};