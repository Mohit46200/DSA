#include <iostream> 
#include <vector>
#include <algorithm>
using namespace std;

vector<int> TwoPointer(vector<int>& nums, int target = 9){      //only if nums are sorted
        int start  = 0;
        int end  = nums.size()-1;
        vector<int> answer;
        while(end>=start){
            if(nums[start] + nums[end] == target){
                answer.push_back(start);
                answer.push_back(end);
                return answer;
            }
            else if(nums[start] + nums[end] > target){
                end--;
            }
            else{
                start++;
            }
        };
        return answer;
    }




int main(){
    vector<int> nums = {2,7,11,15};
    vector<int> answer = TwoPointer(nums);

    for (int x : answer) {
        cout << x << " ";
    }
}