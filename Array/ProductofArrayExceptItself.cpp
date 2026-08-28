 #include <iostream> 
#include <vector>
#include <algorithm>
using namespace std;
 
 vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> ans ;
        int prefix = 1;
        int suffix  = 1;
        for(int i=0;i<nums.size();i++){
            ans.push_back(1);
        }
        for(int i=0;i<nums.size();i++){
            ans[i] = ans[i]*prefix;
            prefix = prefix * nums[i];
        }
        for(int i=nums.size()-1;i>=0;i--){
            ans[i] = ans[i] * suffix;
            suffix = suffix * nums[i];
        }
        return ans;
    }
int main() {
    vector<int> nums = {1,2,3,4};
    vector<int> answer = productExceptSelf(nums);
    for(int i=0;i<answer.size();i++){
        cout<<answer[i]<<"\t";
    }
}