#include <iostream> 
#include <vector>
#include <algorithm>
using namespace std;

 bool isvalid(vector<int> &arr,int k , int mid){          //same login for painter problem 
                                                         // bus usmai (st = max) of arr. Why? A painter must paint an entire board, so the answer can never be smaller than the largest board.
        int st = 1;
        int pages = 0;
        for(int i=0;i<arr.size();i++){
            if(arr[i]>mid){
                return false;
            }
            if(pages+arr[i]<=mid){
                pages = pages+arr[i];
            }else{
                st = st+1;
                pages = arr[i];
            }
        }
        if(st<=k){
            // cout<<"true"<<"\n";
            return true;
        }
        // cout<<"false"<<"\n";
        return false;
    }
    int findPages(vector<int> &arr, int k) {
        if(k>arr.size()){
            return -1;
        }
        int ans = 0;
        int start = 0;
        int sum = 0;
        for(int i=0;i<arr.size();i++){
            sum = sum + arr[i];
        }
        int end = sum;
        int mid;
        while(start<=end){
            mid = (start+end)/2;
            // cout<<mid<<"\n";
            if(isvalid(arr,k,mid)){
                ans=mid;
                end = mid-1;
            }else{
                start = mid+1;
            }
        }
        return ans;
    }

int main() {
    vector<int> arr = {13 ,31, 37, 45, 46, 54, 55, 63, 73, 84, 85};
    int k = 9;
    cout<<findPages(arr,k)<<"\n";
}