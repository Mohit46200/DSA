#include <iostream> 
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

 
    vector<int> ans;                   // worst method
    int ind;
    int num = 0;
    void sortColors(vector<int>& nums) {
        long long max = LLONG_MAX;
        num++;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<=max){
                max = nums[i];
                ind = i;
            }
        }
        ans.push_back(max);
        nums[ind] = 999999999;
        if(num == nums.size()){
            nums = ans;
            return;
        }
        sortColors(nums);
    }

int main() {
    vector<int> nums = {-56,-85,-24,-30,0,5,4,2,9,8,4558,42};
    cout<<"Before Sorting"<<"\n";
    for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<"\t";
    }
    sortColors(nums);
    cout<<"\n"<<"After Sorting"<<"\n";
    for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<"\t";
    }
}