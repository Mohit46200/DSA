#include <iostream> 
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;


void insertionSort(vector<int>& nums){
    for(int i=1;i<nums.size();i++){
        int j=i-1;
        int key = nums[i];
        while(j>=0 && key<nums[j]){
            nums[j+1] = nums[j];
            nums[j] = key;
            j--;
        }
        
    }
}


  void sortColors(vector<int>& nums) {    //0s,1s,2s question with O(n) complexity
        int zeros = 0;
        int ones = 0;
        int twos = 0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                zeros++;
            }else if(nums[i]==1){
                ones++;
            }else{
                twos++;
            }
        }
        for(int i=0;i<zeros;i++){
            nums[i] = 0;
        }
        for(int i=zeros;i<ones+zeros;i++){
            nums[i] = 1;
        }
        for(int i=ones+zeros;i<twos+zeros+ones;i++){
            nums[i] = 2;
        }
    }

int main() {
    vector<int> nums = {5,6,8,1,5,3,4,545641,0,-53,-78,-2};
    for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<"\t";
    }
    cout<<"\n";
    insertionSort(nums);
    for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<"\t";
    }
    cout<<"\n";
}