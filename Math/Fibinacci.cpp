 #include <iostream> 
#include <vector>
#include <algorithm>
using namespace std;

// using recurssion  time complexity is o(2^n)--> (total calls * work done in each call)  
// space complexity o(n) -->(depth in row * total memory in each row)

int fib(int n){
    if(n==0 || n==1){
        return n;
    }
    return fib(n-1) + fib(n-2);
}