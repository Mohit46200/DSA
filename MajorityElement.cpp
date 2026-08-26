#include <iostream> 
#include <vector>
using namespace std;

int MajorityElement(vector<int>& nums){        //Moor's voting Algorithum
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

int main() {
    vector<int> nums = {1,2,56,45,2,2,2,2,2};
    cout<<MajorityElement(nums)<<"\n";
   
}