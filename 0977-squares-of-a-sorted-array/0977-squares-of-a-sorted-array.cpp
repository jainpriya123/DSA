class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        // for(int i=0;i<nums.size();i++){
        //     nums[i]=nums[i]*nums[i];
        // }
        // sort(nums.begin(),nums.end());
        // return nums;
        
        int n=nums.size();
        vector<int>ans(n);
        
        int i=0,j=n-1,k=n-1;
        while(i<=j){
            //both negative
            if(nums[i]<0 && nums[j]<0){
                ans[k]=nums[i]*nums[i];
                i++;
                k--;
            }  
            //one negative one positive
            else if(nums[i]<0 && nums[j]>=0){
                if(nums[i]*nums[i]>nums[j]*nums[j]){
                    ans[k]=nums[i]*nums[i];
                    i++;
                    k--; 
                }
                else{
                    ans[k]=nums[j]*nums[j];
                    j--;
                    k--; 
                }
            }
            //both positive
            else if(nums[i]>=0 && nums[j]>=0){
                    ans[k]=nums[j]*nums[j];
                    j--;
                    k--;
            }  
        }
        
        return ans;
    }
};


//can do in O(n) using extra space using two pointer