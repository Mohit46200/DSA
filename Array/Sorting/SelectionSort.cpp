#include <iostream> 
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

void selectionSort(vector<int>& nums, int a){         //time complexity (O(n^2))
    long long max = LLONG_MAX;
    int ind;
    for(int i=a;i<nums.size();i++){
        if(nums[i]<max){
            max = nums[i];
            ind = i;
        }   
    }
    swap(nums[ind],nums[a]);
    a++;
    if(a==nums.size()){
        return;
    }
    selectionSort(nums,a);
    
    
}
int main() {
    vector<int> nums = {-59,0,4589,5000,8,6,24,-1,-85};
    for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<"\t";
    }
    cout<<"\n";
    selectionSort(nums,0);
    for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<"\t";
    }
    cout<<"\n";
}