#include <iostream> 
#include <vector>
#include <algorithm>
using namespace std;

int MoorsVoting(vector<int>& nums){        //Moor's voting Algorithum
        int freq = 0;
        int answer = nums[0];
        for(int i = 0 ; i<nums.size(); i++){
            if(freq == 0){
                answer = nums[i];
            }else if(answer == nums[i]){
                freq++;
            }else{
                freq--;
            }
        }
        return answer;
}

int sortingMethod(vector<int>& nums){
    sort(nums.begin(),nums.end());
    int freq = 1;
    int ans = nums[0];
    for(int i=1;i<nums.size();i++){
        if(nums[i] == nums[i-1]){
            freq++;
        }else{
            freq=1;
            ans = nums[i];
        }
        if(freq>nums.size()/2){
            return ans;
        }
    }
    return -1;
}

int main() {
    vector<int> nums = {1,2,56,45,2,2,2,2,2};
    cout<<MoorsVoting(nums)<<"\n";
    cout<<sortingMethod(nums)<<"\n";
   
}