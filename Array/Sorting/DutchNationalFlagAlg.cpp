#include <iostream> 
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

 
 
 
 void sortColors(vector<int>& nums) {    
        int start = 0;
        int mid = 0;
        int end = nums.size()-1;
        while(mid<=end){
            if(nums[mid] == 0){
                swap(nums[mid],nums[start]);
                start++;
            }else if(nums[mid] == 2){
                swap(nums[mid],nums[end]);
                end--;
                mid--;
            }
            mid++;
        }
    }


void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {    //merge two sorted arrays
        for(int i=nums1.size()-1;i>=0;i--){
            if(m==0){
                nums1[i]=nums2[n-1];
                n--;
            }
            else if(n==0){
                nums1[i]=nums1[m-1];
                m--;
            }
            else if(nums1[m-1]>=nums2[n-1]){
                nums1[i] = nums1[m-1];
                m--;
            }else{
                nums1[i] = nums2[n-1];
                n--;
            }
        }
    }

